# Emerging_tech_arduino
Ons project voor 'Emerging_tech_arduino'is een functioneel 'Wizard of OZ'-prototype maken.
Om dit te realiseren, moeten we een dier kunnen laten bewegen en een LED-ring kunnen activeren zodra een zorgmedewerker in de buurt is.
Daarvoor gebruiken we een bakje dat IR-signalen uitzendt om de feedbackunit aan te sturen wanneer de zorgmedewerker nadert.
De feedbackunit bevat een IR-sensor om de signalen te detecteren, een Adafruit NeoPixel Ring met 12 LEDs en een micro servo motor.

- Arduino scripts kan je vinden in [code/arduino](Codes/combinatieServoLedRing)
## Elektronica
Wat hebben we allemaal gebruikt
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

