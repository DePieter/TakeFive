/*
Aansluitingen:
ledStrip: GND (Grijze kabel) -> GND arduino, 5V (Witte kabel) -> 5V arduino, D (Paarse kabel) -> pin 6
Servo: GND (zwarte kabel) -> GND arduino, 5V (rode kabel) -> 5V arduino, Signaal (Oranje kabel) -> pin 9
IRsensor: GND met GND, 5V met 5V, Output (linker pootje)-> pin 8

Installeer de libraries:
"Adafruit_NeoPixel.h", 
"IRremote" by shirriff, z3to, ArminJo
"Servo" by Micheal Margolis, Arduino

Met behulp van een IR-bakje kan je het besturen.
De servo kan aangestuurd worden met het bakje.
Als de servo maximaal staat, zal de stresswaarde 10 zijn anders is het tussen de 1 en 9.
Tussen 1-9 zal de ledRing groen pulseren, wanneer het 10 is zal het oranje pulseren.
*/

#include <IRremote.hpp>
#include <Servo.h>
#include <Adafruit_NeoPixel.h>

#define IR_RECEIVE_PIN 8
#define SERVO_PIN 9
#define LED_PIN     6
#define LED_COUNT   12

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800); // aanmaak van neoPixel
Servo servo;// aanmaak van servo

int stresswaarde =1; // varieert tussen 1 en 10
int RoodGB= 0;
int RGroenB= 0;
int RGblauw=0;
int pos = 0;
int stapRichting=1;

uint32_t Kleur_Ledring = strip.Color(0, 0, 0);    
unsigned long vorigeTijd = 0;
unsigned long tijd=0;
unsigned long tijdsVerschil=0;


void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN); // IR sensor een pin geven
  servo.attach(SERVO_PIN); // Servo een pin geven
  pos = servo.read();       // neem huidige positie als startpunt
  strip.begin(); // led-ring wakker maken
  strip.show(); // LEDs uit
}

void loop() {

tijd=millis();// werken met Millis voor delay te vervangen -> focus op 16 keer pulseren per minuut (ademhalingsritme) -
tijdsVerschil= round(tijd-vorigeTijd);
if (tijdsVerschil >= 18.75) {
    vorigeTijd = tijd;
}


if (IrReceiver.decode()) {
    int cmd = IrReceiver.decodedIRData.command;
    int oldPos = pos;

    if (cmd == 7) pos = min(pos + 10, 180);         // omhoog
    else if (cmd == 21) pos = max(pos - 10, 0);     // omlaag
    else if (cmd == 12) pos = min(pos + 16, 180);
    else if (cmd == 24) pos = min(pos + 32, 180);
    else if (cmd == 94) pos = min(pos + 48, 180);

    if (pos != oldPos) {// posten van nieuwe hoek in monitor
      stresswaarde = map(pos, 0, 180, 1, 10);// Stresswaarde aanpassen
      servo.write(pos);
      Serial.print("Nieuwe hoek: ");
      Serial.println(pos);
      Serial.println(stresswaarde);

    }

    IrReceiver.resume();
  }


// Rustig groen pulserend 
// Groen 50 naar 255
if (stresswaarde !=10 && tijdsVerschil>18.75){// 18.75 -> 16 keer pulseren per minuut (ademhalingstempo)
  if (RGroenB>=255) {stapRichting =-1;} // eenmaal het maximaal heeft bereikt 
  else if (RGroenB<=50) {stapRichting =1;}
  RGroenB = RGroenB + stapRichting * 2.05; // 2.05= (255-50)/100
  RGroenB = constrain(RGroenB, 50, 255); // extra veiligheid

  Kleur_Ledring = strip.Color(0, RGroenB, 0); // RGB-code toekennen aan een variable
  besturingLedring(12, Kleur_Ledring); // variable doorsturen naar zelfgemaakte functie die ledRing aanstuurt (zie onder void loop)
}

// Hoge stresswaarde pulserend
// Rood 80 naar 255
// Groen 10 naar 60
if (stresswaarde==10 && tijdsVerschil>18.75) {
  if (RoodGB>=254) {stapRichting = -1;}
  else if (RoodGB<=80) {stapRichting = 1;}
  RoodGB = RoodGB + stapRichting * 1.75;
  RGroenB = 10+ (RoodGB-80)/3.5;// RGroenB is afhankelijk van RoodGB
  RoodGB = constrain(RoodGB, 80, 255);
  RGroenB = constrain(RGroenB, 10, 60);

  Kleur_Ledring = strip.Color(RoodGB, RGroenB, 0);
  besturingLedring(12, Kleur_Ledring);
}

}// haakje van void loop

void besturingLedring(int aantalLeds, uint32_t kleur) {
  for (int i = 0; i < LED_COUNT; i++) {
      strip.setPixelColor(i, kleur);
    } 
  strip.show();
  }

