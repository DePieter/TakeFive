# Emerging_tech_arduino
De overkoepelende opdracht voor het vak Opkomende Technologieën beschrijft het realiseren van een Wizard of Oz prototype voor het project van het vak gebruiksgericht ontwerpen. Het project kan als volgt in een notendop worden beschreven: een wearable die het stressniveau van een zorgverlener communiceert naar een feedbackunit die dit stressniveau van zorgverleners visualiseert met een bewegend dier als metafoor. Het doel hiervan is om meer aandacht te bieden aan stress binnen zorginstellingen, zodat hier beter op ingespeeld kan worden en burn-outs en uitval door stress op lange termijn kunnen worden voorkomen.

Aangezien de hoofdzakelijke focus voornamelijk op de feedbackunit ligt, zal enkel dit aspect worden uitgewerkt als prototype. Als metafoor is gekozen voor een hond die verschillende houdingen kan aannemen: van staand naar zittend en alle tussenliggende posities. De positie van de hond geeft het stressniveau van de zorgverlener weer.
Bijkomend is het de bedoeling dat de feedbackunit enkel de stress status aangeeft als de betreffende gebruiker in de buurt is, dit om negatieve stigmatisering te beperken.
Concreet moet dit prototype voldoen aan volgende vereisten om het te kunnen beschouwen als een geslaagd wizard of zo prototype:

| Vereiste                                                        | Methode/Technologie             |
|------------------------------------------------------------------|----------------------------------|
| Hond die van staan naar zitten beweegt, inclusief tussenposities | Servomotor                       |
| Visuele aanduiding van stressniveau                              | Adafruit Neopixel 12 LED-ring    |
| Draadloze bediening (aan/uit, houdingen, nauwkeurige positiebepaling) | IR-afstandsbediening en -ontvanger |


De werkende Arduino scripts zijn te vinden via: [code/arduino](Codes/combinatieServoLedRingV2)
## Elektronica
Gebruikte componenten:
- [12 led's ledring](https://www.otronic.nl/nl/12-bit-rgb-leds-ws2812b-cirkel-rond-neop-140567797.html?source=googlebase&gad_campaignid=19639985996
)
- [330 ohm weerstand](https://www.bitsandparts.nl/Weerstand-330-Ohm-1-4W-5pct-p101277?gQT=1)
- [Micro servomotor](https://www.bitsandparts.nl/Servo-motor-analoog-Micro-Servo-9g-SG90-180%C2%B0-p1907205?gQT=1)
- [IR-sensor](https://www.amazon.com.be/-/nl/LAOMAO-IR-zender-ontvanger-infrarood-diode/dp/B00EFOTJZE/ref=asc_df_B00EFOTJZE?mcid=ccc62f0bed2f3b54b88e6d84a187dd9d&hvadid=714474122054&hvpos=&hvnetw=g&hvrand=13440445988076704702&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9197127&hvtargid=pla-391957536169&psc=1&language=nl_BE)
- [9V batterij](https://www.amazon.com.be/-/nl/Duracell-Plus-Power-Alkaline-batterijen-stuks/dp/B00L6ZBJQC/ref=asc_df_B00L6ZBJQC?mcid=0bd8d411819c35bea0549e8427ceeeae&hvadid=714355656954&hvpos=&hvnetw=g&hvrand=1374928461625661830&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9197127&hvtargid=pla-423435131457&psc=1&language=nl_BE)
- [Arduino UNO](https://www.bitsandparts.nl/product/FUNDUINO_ARDUINO_UNO_R3?gad_campaignid=22404178302)
- [DC-to-DC converter](https://be.farnell.com/stmicroelectronics/l7805cv/ic-v-reg-5-0v-7805-to-220-3/dp/9756078)
- [Breadboard](https://sinuss.be/products/psg-bb-170w-breadboard-170-pin-white-pro-signal?currency=EUR)

## Bedradingsschema
Dit schema toont een Arduino Uno die wordt aangestuurd via een IR-afstandsbediening. De IR-ontvanger ontvangt signalen en stuurt die naar de Arduino. Hiermee worden een NeoPixel LED-ring en een servomotor aangestuurd. De LED-ring is verbonden via een 330 ohm weerstand en krijgt, net als de servo, stroom via het breadboard.
<img src="Images/Bedradingschema.png" width="100%"> 

## Workflow
Om het project gestructureerd aan te pakken, werd het opgedeeld in twee delen: de basiswerking en mogelijke uitbreidingen. Dit zorgt ervoor dat eerst de essentiële functies volledig en stabiel werken, zodat er op een betrouwbare manier verder kan worden gebouwd. Een werkend prototype vereist in elk geval een correct functionerende basis.
Basiswerking
De basisfunctionaliteit bestaat uit het laten bewegen van een 3D-print van een hond (via een servomotor) en het weergeven van een LED-signaal (via een ledring). Deze twee elementen reageren op input via een IR-afstandsbediening.
De stappen die hiervoor werden gevolgd:
1.	IR-signalen uitlezen via de seriële monitor.
2.	Verschillende binnenkomende IR-codes herkennen en onderscheiden.
3.	De servomotor aansturen op basis van een geselecteerd IR-commando.
4.	De LED-ring tegelijk met de servo laten reageren op dezelfde input.
Uitbreiding
In een latere fase kan het systeem uitgebreid worden met een proximityfunctie via Bluetooth. Hierbij werkt de feedbackunit (servo + LED) pas als de gebruiker, die een wearable draagt, zich binnen een bepaalde afstand bevindt.
De uitbreidingsstappen:
1.	Een toestel ontwikkelen dat een Bluetoothsignaal uitzendt (simulatie van de wearable).
2.	De nabijheid van dit toestel meten aan de hand van de signaalsterkte (RSSI).
Aanpak
Als eerste werd een verbinding gelegd tussen de Arduino en de IR-ontvanger. Met behulp van de seriële monitor konden de unieke codes van elke knop op de afstandsbediening gelogd worden. Vervolgens werd de servomotor aangestuurd op basis van een gekozen IR-waarde. Toen dit betrouwbaar werkte, werd de LED-ring apart getest en later toegevoegd aan de code. Pas toen alle onderdelen afzonderlijk goed functioneerden, werden ze geïntegreerd in één programma. Hieronder is een flowchart gevisualiseerd van de aanpak van dit project. 

<img src="Images/Flowchart.png" width="100%"> 
## Video
Hieronder zie je een video van de werkende elektronica, nog vóór deze werd geïntegreerd in het prototype:
<img src="Images/Videowerkendprototype gifversie.gif" alt="Demo" width="100%"/>

## Problemen onderweg
Hieronder staan een reeks van onze problemen en hoe we ze hebben opgelost.
### Gebruik van een delay bij de led's
Bij het originele programma van de ledring stond er een delay in van 18ms, dit ging problemen geven voor het inlezen van de IR-signalen.
Onze oplossing hiervoor is om met millis() te werken, hierbij controleert het of er al 18ms zijn gepasseerd sinds de vorige kleurverandering.
### Interrupt
Bij het gebruik van interrupt bleek het niet betrouwbaar te zijn met andere 'ruis'-signalen.
### Switch case
Momenteel maken we maar gebruik van 2 verschillende kleuren. Als we verschillende stresswaardes hebben, kunnen we ook met een switchcase werken per stresswaarde.
### Tinkercad - Adafruit
Tinkercad staat niet toe om met adafruit te werken, hierdoor konden we het niet virtueel testen waardoor we de schakeling in het echt hebben gemaakt.
### Servo 
De servo zit soms een stap te bewegen zonder dat hij mag bewegen. 

## Code
In het eerste deel van de code worden de library's geinclude, de pinnen gezet, de servo en ledring digitaal aangemaakt en alle variables gemaakt.  
<img src="Images/Images code/Lijntjes include, define.png" height="440"> 

In de void setup worden de IR-pin en de servopin correct ingesteld. Ook wordt hier de startpositie van de servo bepaald en de ledring uitgeschakeld om mee te beginnen.  
<img src="Images/Images code/Void setup.png" height="140"> 

In de start van de void loop wordt er een functie millis aangemaakt, deze zal de tijd controleren zodat de ledring iedere 18ms een verandering maakt van kleur.   
<img src="Images/Images code/Start void loop, millis timer.png" height="120"> 

Deze if-lus wordt enkel doorlopen als er een IR-signaal gedecteerd is. Daarna wordt er gekeken welk signaal het is voor de servo te besturen. Als het een knop voor de servo was dan zal deze verdraaien. Ondertussen zal de hoek van de servo gemapped worden in een waarde tussen 1-10. Met deze waarde wordt de ledring aangestuurd.  
<img src="Images/Images code/IRsensor inlezen en sturen van de servo.png" height="400"> 

In dit deel van de code wordt de ledring aangestuurd. Het is daarbij belangrijk dat deze 16 keer per minuut pulseert, net als een menselijke ademhaling. De puls verloopt in 200 stappen: 100 stappen waarbij het licht feller wordt en 100 waarbij het weer dimt. Na elke stap wordt de ledring aangepast via een aparte void-lus.  
<img src="Images/Images code/Pulseren van de ledring.png" height="200"> 

In deze apart void-lus wordt de ledring bestuurd. Hierdoor is het makkelijk om de led's aan te sturen en voor de programma's te combineren.  
<img src="Images/Images code/extra functie voor de leds aan te sturen.png" height="100"> 
