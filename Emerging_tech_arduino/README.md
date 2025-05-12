# Emerging_tech_arduino
Ons project voor 'Emerging_tech_arduino'is een functioneel 'Wizard of OZ'-prototype maken.
Om dit te realiseren, moeten we een dier kunnen laten bewegen en een LED-ring kunnen activeren zodra een zorgmedewerker in de buurt is.
Daarvoor gebruiken we een bakje dat IR-signalen uitzendt om de feedbackunit aan te sturen wanneer de zorgmedewerker nadert.
De feedbackunit bevat een IR-sensor om de signalen te detecteren, een Adafruit NeoPixel Ring met 12 LEDs en een micro servo motor.
Doelen:
- Op afstand bestuurbaar zijn.
- Een motor kunnen besturen.
- Een ledring kunnen besturen.

- Arduino scripts kan je vinden in [code/arduino](Codes/combinatieServoLedRing)
## Elektronica
Hieronder staan al onze componenten die we gebruikt hebben:
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
De ledring is verbonden met een 330 ohm weerstand. 
Wat hier niet vermeld staat, is dat de Arduino zal worden aangesloten op een 9V-batterij. Deze batterij dient ook als extra stroomvoorziening, in combinatie met een 9V-naar-5V converter. Dit is omdat de arduino alleen niet sterk genoeg is om zowel de servomotor als ledring van stroom te verzien.  
<img src="Images/Bedradingschema.png" width="100%"> 

## Workflow
Om van start te gaan hebben we ons project in 3 delen opgesplits: het IR-signaal meten, de servomotor aansturen en de ledring aansturen.
Wanneer het IR-signaal detecteerbaar kon gemeten worden, gingen we over naar het koppelen van de servomotor aan het IR-signaal. 
De ledring werd eerst apart bestuurd via de seriele monitor. Toen dit werkte, werd alles gekoppeld aan elkaar in één code. Met enkele aanpassingen (delay->millis,...) werkte alles tesamen.
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
### 5V power supply.
Omdat er zowel een ledring als servo op 1 arduino aangesloten is, is de powersupply niet sterk genoeg. Hiervoor gaan we werken met een 9V batterij die zowel de arduino powered en met behulp van een 9V-to-5V converter om die extra powersupply te voorzien.

