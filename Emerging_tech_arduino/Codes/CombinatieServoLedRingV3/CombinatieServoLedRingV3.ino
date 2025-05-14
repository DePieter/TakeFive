//Bram Finn Pieter

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
De kleur van de ledring hangt af va nde hoek van de servo.
*/

#include <IRremote.hpp>
#include <Servo.h>
#include <Adafruit_NeoPixel.h>

#define IR_RECEIVE_PIN 8
#define SERVO_PIN 9
#define LED_PIN 6
#define LED_COUNT 12

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
Servo servo;

int pos = 0;
int targetPos = 0;
bool systeemActief = true;
bool positieVeranderd = false;
bool servoIsAttached = false;

int RoodGB= 0;
int RGroenB= 0;
int RGblauw=0;
int stapRichting=1;

uint32_t Kleur_Ledring = strip.Color(0, 0, 0);    
unsigned long vorigeTijd = 0;
unsigned long tijd=0;
unsigned long tijdsVerschil=0;



// Debounce
unsigned long laatsteToggleTijd = 0;
const unsigned long debounceInterval = 500;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
  strip.begin();
  strip.show();  // zet alle leds uit

  delay(500);             // tijd om servo manueel te plaatsen
  pos = targetPos = servo.read(); // positie bewaren bij opstart
  Serial.print("Startpositie: ");
  Serial.println(pos);
}

void loop() {
  // IR input verwerken
  if (IrReceiver.decode()) {
    int cmd = IrReceiver.decodedIRData.command;
    Serial.print("Ontvangen IR commando: ");
    Serial.println(cmd);

    if (cmd == 22 && (millis() - laatsteToggleTijd > debounceInterval)) {
      systeemActief = !systeemActief;
      laatsteToggleTijd = millis();

      Serial.print("Systeem actief: ");
      Serial.println(systeemActief ? "JA" : "NEE");

      if (!systeemActief) {
        if (servoIsAttached) {
          servo.detach();
          servoIsAttached = false;
          Serial.println("Servo losgekoppeld (systeem uit)");
        }
        strip.clear();
        strip.show();
      }
    }

    if (systeemActief) {
      if (cmd == 7)    { targetPos = constrain(pos + 10, 110, 190); positieVeranderd = true; }
      if (cmd == 21)   { targetPos = constrain(pos - 10, 110, 190); positieVeranderd = true; }
      if (cmd == 12)   { targetPos = 110; positieVeranderd = true; }
      if (cmd == 24)   { targetPos = 150; positieVeranderd = true; }
      if (cmd == 94)   { targetPos = 190; positieVeranderd = true; }

      // Servo pas opnieuw koppelen bij nieuwe beweging
      if (positieVeranderd && !servoIsAttached) {
        servo.attach(SERVO_PIN);
        servoIsAttached = true;
        Serial.println("Servo opnieuw gekoppeld");
      }
    }

    IrReceiver.resume();
  }

  // Servo bewegen
  if (systeemActief && positieVeranderd && servoIsAttached) {
    if (pos != targetPos) {
      pos += (pos < targetPos) ? 1 : -1;
      servo.write(pos);
      delay(20);
    } else {
      positieVeranderd = false;

      // Servo uitschakelen als beweging klaar is
      servo.detach();
      servoIsAttached = false;
      Serial.println("Servo beweging voltooid → detach()");
    }
  }

  // LED pulsering
  if (systeemActief) {
      tijd=millis();// werken met Millis voor delay te vervangen -> focus op 16 keer pulseren per minuut (ademhalingsritme) -
      tijdsVerschil= round(tijd-vorigeTijd);
      if (tijdsVerschil >= 18.75) {
        vorigeTijd = tijd;
      }

      
      // Rustig groen pulserend 
      // Groen 50 naar 255
      if (targetPos == 190 && tijdsVerschil>18.75) {
        if (RoodGB>=254) {stapRichting = -1;}
        else if (RoodGB<=80) {stapRichting = 1;}
        RoodGB = RoodGB + stapRichting * 1.75;
        RGroenB = 10+ (RoodGB-80)/3.5;// RGroenB is afhankelijk van RoodGB
        RoodGB = constrain(RoodGB, 80, 255);
        RGroenB = constrain(RGroenB, 10, 60);

        Kleur_Ledring = strip.Color(RoodGB, RGroenB, 0);
        besturingLedring(12, Kleur_Ledring);
      }
            // Rustig groen pulserend 
      // Groen 50 naar 200
      else if (tijdsVerschil>18.75){// 18.75 -> 16 keer pulseren per minuut (ademhalingstempo)
        if (RGroenB>=200) {stapRichting =-1;} // eenmaal het maximaal heeft bereikt 
        else if (RGroenB<=50) {stapRichting =1;}
        RGroenB = RGroenB + stapRichting * (200-50)/100; // 2.05= (200-50)/100
        RGroenB = constrain(RGroenB, 50, 200); // extra veiligheid

        Kleur_Ledring = strip.Color(0, RGroenB, 0); // RGB-code toekennen aan een variable
        besturingLedring(12, Kleur_Ledring); // variable doorsturen naar zelfgemaakte functie die ledRing aanstuurt (zie onder void loop)
      }



    }
}// haakje void loop




void besturingLedring(int aantalLeds, uint32_t kleur) {
  for (int i = 0; i < LED_COUNT; i++) {
      strip.setPixelColor(i, kleur);
    } 
  strip.show();
  }