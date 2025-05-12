# Emerging_tech_arduino
Ons project voor 'Emerging_tech_arduino'is een functioneel 'Wizard of OZ'-prototype maken.
Om dit te realiseren, moeten we een dier kunnen laten bewegen en een LED-ring kunnen activeren zodra een zorgmedewerker in de buurt is.
Daarvoor gebruiken we een bakje dat IR-signalen uitzendt om de feedbackunit aan te sturen wanneer de zorgmedewerker nadert.
De feedbackunit bevat een IR-sensor om de signalen te detecteren, een Adafruit NeoPixel Ring met 12 LEDs en een micro servo motor.

- Arduino scripts kan je vinden in [code/arduino](Codes/combinatieServoLedRing)


## Bedradingsschema
De ledring is verbonden met een 330 ohm weerstand. 
Wat hier niet vermeld staat, is dat de Arduino zal worden aangesloten op een 9V-batterij. Deze batterij dient ook als extra stroomvoorziening, in combinatie met een 9V-naar-5V converter. Dit is omdat de arduino alleen niet sterk genoeg is om zowel de servomotor als ledring van stroom te verzien.  
<img src="Images/Bedradingschema.png" width="100%"> 

