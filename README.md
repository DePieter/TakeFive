# Projecttitel (coming soon)
Op basis van HRV (hartslagvariatie) en ruimte voor implementatie van cortisolsensoren pauzes voorstellen aan zorgpersoneel.

Projectteam: Demaegdt Pieter & Tops Bram

12/12/2024

## Samenvatting
Zorgverleners ervaren veel stress, de oorsprong van deze stress is de hoge werkdruk die deze zorgverleners ervaren. Dit is gebleken uit interviews met zorgverleners en literatuuronderzoek van talloze wetenschappelijke artikelen.

Burn-outs zijn een van de zwaarste gevolgen van deze hoge werkdruk, als hiervoor geen oplossing wordt voorzien eindigt dit in een vizieuze cirkel.De oplossing hiertoe is dus om burn-out te preventeren. 

Hiervoor hebben we een stressmonitor ontwikkeld die monteerbaar is op de bovenarm. Deze meet stress op basis van de hartslagvariatie en het stresshormoon (cortisol). Deze realtimedata wordt dan doorgestuurd naar de feedbackunit die op basis van herhaaldelijke stressniveaus een pauze zou kunnen aanraden. Deze pauze draait dan rond een oefening die stress effectief kan tegenwerken.

<p align="center">
  <img src="Map foto's2/shutterstock_645688138-768x513.webp" width="33%">
  <img src="Map foto's2/NAJ_logo_zorgverlener-1.png" width="32%">
  <img src="Map foto's2/images.jpeg" width="31%">
</p>

## Introductie
De werkdruk in de zorg ligt hoog. Dit wordt ook duidelijk uit het artikel van Zorgnet-Icuro[^1]. Zo heeft 1 op de 5 een grote kans op voor een burn-out op te lopen. Er is momenteel weinig personeel in de zorgsector en daarom is het belangrijk om in te zetten op stimulatie en welzijn om zo hun werk aangenaam te houden. Dit is een probleem dat maar zal blijven groeien als er niets aan gedaan wordt. Daarom willen wij met behulp van een slimme sensor pauzes voorstellen zodat ze minder stress ervaren.

**Op welke manier kunnen we de stress bij woonzorgmedewerkers verlagen zonder dat dit interfereert met hun werk.**

Voorwaarden:
- veilig
- gebruiksvriendelijk
- werkvriendelijk
- intuïtief

Tijdens dit proces zal de woonzorgmedewerker centraal staan. We zullen zeker niet vergeten rekening te houden met enkele belangrijke stakeholders zoals de collega's en bewoners zelf.

## Methodologie

Elk probleem start eerst met een exploratie van het probleem. Voor de discovery van het probleem zijn we van start gegaan met een literatuuronderzoek. Dit gaf al een idee dat het probleem van burn-outs een serieus probleem was. Na enkele interviews met woonzorgmedewerkers en gespreken met een professional werd het duidelijk dat het een serieus probleem was. 

Voor dit probleem aan te pakken hielden we ons in de discoveryfase bezig met zoveel mogelijk info verzamelen. Dan hebben we via templates zoals de 5WH en PESTEL de belangrijkste ideeën uitgehaald voor zo goed mogelijke _design requirements_ op te stellen. Met behulp van deze requirements kon er een mogelijk concept gemaakt worden voor de tussentijdse pitch. Hierna we dit concept verder uitgewerkt hebben met behulp van _storyboarding_ en de _MoSCoW-template_. 

Uiteindelijk kwamen er enkele vroege dirty-prototypes uit. Dit hebben we dan getest in onze eerste wave bij WZC Althus. Door de feedback toe te passen dat we gekregen hebben uit wave 1 hebben we een minder dirty-prototype gemaakt. Deze heeft dan een weeklange test begaan bij VZW De oever. Op het einde van de test hebben we nog een groepsinterview gedaan voor iedereen zijn feedback te horen. Met behulp van deze data kunnen we de _design requirements_ bijwerken zodat het ook voldoet aan de eisen en wensen van de stakeholders.

<p align="centerl">
  <img src="Map foto's2/Methodologie.jpg" width="100%">
</p>	


## Discovery
De Discovery fase draait rond het definieren van een probleemruimte, hierbinnen inzichten te verkrijgen en een oplossing in de vorm van een product te verkrijgen. Om deze te verkrijgen zijn er gebruikersinterviews en marktanalyse uitgevoerd omtrent de haalbaarheid.
### Doestellingen
Een goed geformuleerde "how might we" vormen voor de probleemruimte.
### Materiaal & methoden
- User interviews (N=3)
- Literature reviews (N=10)
### Resultaten

#### User interviews (N=3)
Aan de hand van user interviews kunnen de bevindingen over de toepassingen van een stressmonitor in de zorgsector worden opgenomen. De inzichten die hieruit voortkomen kunnen de effectiviteit, mogelijke hindernissen en ontwerpimplicaties identificeren.
Hieruit werd bevestigd dat werkdruk binnen de zorg hoog ligt en daarom als probleem kan worden gezien. Hiervoorzijn er drie interviews afgelegd bij studentes uit de richting verpleegkunde. Dit omdat ze gedurende hun opleiding op verschillende afdelingen stage lopen en zo tal van problemen tegenkomen en inzichten in verkrijgen.
Tijdens deze interviews zijn er vragen gesteld omtrent het bevinden van een stressmonitor, werkdruk en hoe deze juist in een bepaalde omgeving zou passen. Aan de hand van 5why's en de PESTLE methode werden de antwoorden extra bevestigd en verfijnd.
#### Literature reviews (N=10)
Een kritisch punt in het meten van burnout was de haalbaarheid hierin. De symptomen hiervan, zogenaamde biomarkers moesten worden onderzocht alsook de meetbaarheid en technologie ervoor.
Zo zijn volgende themas onderzocht:
- Doelgroep
- Jaarlijkse kost en evolutie van het probleem
- Biomarkers
- Oorzaken van Burn-out
- Huidig onderzoek omtrent biomarkers en meetbaarheid van burnout
- Burnout preventie en interventie
- Technische haalbaarheid
### Conclusies & implicaties
#### Oorzaken en Gevolgen
- Werkdruk en Pauzeproblematiek: Personeelstekorten zorgen voor langere diensten en kortere pauzes. In veel gevallen worden pauzes zelfs overgeslagen bij verhoogde werkdruk, wat het stressniveau verder verhoogt. Zo wijst uit onderstaande grafiek dat werkdruk de grootste impact heeft op werk-privé balans bij een groot percentage aan personeel.
  <img src="Map foto's2/graph.jpg">
- Burn-out Statistieken: Sinds de pandemie is langdurig ziekteverzuim met 50% toegenomen. De geschatte jaarlijkse kosten voor burn-out in de zorgsector bedragen ongeveer €228 miljoen, met een stijging van 10% in vijf jaar.
- Dubbel Negatief Effect: Verhoogde werkdruk leidt niet alleen tot meer stress, maar ook tot het uitstellen of overslaan van pauzes, wat het probleem verder verergert.
#### Inzichten uit Onderzoek
- Meetbare Biomarkers: Hartslagvariabiliteit (HRV) en cortisol zijn betrouwbare indicatoren van stress en burn-out. HRV kan continu worden gemeten met draagbare apparaten, terwijl cortisolmetingen via elektrochemische sensoren nieuwe mogelijkheden bieden.
- Kosten en Trends: Burn-out blijft een groeiend probleem met substantiële economische en sociale impact. Preventieve maatregelen zijn daarom essentieel.
- Oorzaak van Stress: Werkdruk is de belangrijkste drijfveer achter stress, versterkt door personeelstekorten en een gebrek aan structurele oplossingen.
#### Aanbevelingen voor Ontwerp
- Real-time Monitoring: Ontwikkel draagbare apparaten die stressniveaus kunnen meten via HRV en mogelijks cortisol. Deze apparaten moeten real-time feedback geven, zoals lichtsignalen of trillingen, om gebruikers bewust te maken van stress zonder afleiding.
- Flexibele Pauzeherinneringen: Implementeer een systeem dat gepersonaliseerde pauzeherinneringen biedt, zelfs tijdens piekmomenten. Opties om meldingen tijdelijk te onderdrukken zonder metingen te stoppen, zorgen voor extra flexibiliteit.
- Privacy, discretie wordt verkozen.
- Gebruiksvriendelijk Ontwerp: Apparaten moeten comfortabel en draagbaar zijn, geschikt voor verschillende werkomgevingen en uniformen.

## Definition

### Doelstellingen
- Onderzoek doen omtrend de marketfit van het idee.
- Feedbackopties (geluid, trillen, licht,...) uittesten. Hierbij kijken welke het best werken.
- Prototypes uittesten

### Materiaal & methoden
### **Wave 1 (N=5)**	                                                                                                         									
Waar: Woonzorgcentrum Althus                                                                          											
<p align="left">
  <img src="Map foto's2/images.png" width="25%">
</p>	

#### Doel:															
- Marketfit vinden
- Locaties voor de hartslagsensor uittesten
- Prototypes uittesten

#### Testen
Hiervoor hebben we 2 verschillende prototypes gemaakt voor de feedback en voor de sensor. Zo konden we 2 medewerkers op hetzelfde moment de prototypes laten uittesten. De prototypes van de sensor waren één sensor voor op de borst en één voor op de bovenarm. Op andere plekken zou het medisch niet goedgekeurd worden of zou de hartslagsensor niet kunnen nauwkeurig genoeg werken.
Voor de feedbackunit hebben we geëxperimenteerd met de methodes voor ze te laten weten dat ze pauze moeten pakken. Achter dat ze de prototypes hadden uitgetest voor een uur hebben we ze geïnterviewd. Deze vragen gingen over onder andere marketfit en de ervaring met het huidige prototype.
<p align="center">
  <img src="Map foto's2/Schermafbeelding%202025-01-07%20205655.jpg" width="32%">
  <img src="Map foto's2/Schermafbeelding%202025-01-07%20205708.jpg" width="36%">
  <img src="Map foto's2/Schermafbeelding%202025-01-07%20205720.jpg" width="24%">
</p>

#### Resultaten
Uit de interviews kregen we te horen dat er wel degelijk een nood was aan zo'n type product. 

Ook hebben we voor wat de locatie betreft een keuze gemaakt op basis van ergonomie. 

#### Conclusies & implicaties:
- Het is een nodig product
- Discrete meldingen worden als positief gezien
- Meldingen moeten kunnen worden afgezet
- Lightweight en compacte wearable, bij voorkeur op de arm

### **Wave 2 (N=5)**	                                                                                                         									
Waar: Woonzorgcentrum De Oever                                                                          										
<p align="left">
  <img src="Map foto's2/Schermafbeelding%202025-01-07%20210611.jpg" width="33%">
</p>	

#### Doel:															
- Marketfit vinden
- Hartslagdata verzamelen
- Prototype uittesten

#### Testen
Hiervoor hebben we een prototype gemaakt voor op de bovenarm. Dit werd met een handleiding en uitleg gegeven aan de medewerkers die het dan elk voor één hele voormiddag (8u tot 12u) zouden dragen. Hierbij hebben ze om het uur oefeningen (ademhalen, babbelen,...) moeten doen voor hun stress te verminderen. Na iedere test heeft de medewerker enkele vragen ingevuld omtrend de oefeningen. Op het einde van alle testen hebben we nog een groepsgesprek gedaan met alle testpersonen.

#### Resultaten:
- Meldingen mogen duidelijker
- Meldingen moeten kunnen worden afgezet
- Lightweight en compacte wearable
- Oefeningen zijn afhankelijk van de persoon
- Het prototype zou kleiner mogen.
<p align="center">
  <img src="Map foto's2/chest.jpeg" width="45%">
  <img src="Map foto's2/6f352712-c0cb-4798-a1ff-b761aba4c04a.jpeg" width="13%">
  <img src="Map foto's2/9bd2bdc9-50aa-4ac4-92f9-c93c5c681178.jpeg" width="19%">
  <img src="Map foto's2/0ace9e9f-990d-4388-912e-3b2dec61f7fc%20(1).jpeg" width="13%">
</p>

### Conclusies & implicaties:
Duidelijke meldingen zijn handig, een lichtje valt soms niet op.
Er is een mogelijkheid voor het in de werkkar te verwerken.
Er is een nood aan zo'n type product.
Er is geen algemene oefening voor stress te verminderen.
> [!IMPORTANT]
> Design requirements
> - De feedbackunit moet verwerkt worden in de zorgkar
> - De voorgestelde oefeningen moeten effectief zijn en passen in de workflow
> - De draagconfiguratie moet op de bovenarm worden gedragen
> - De draagconfiguratie moet zo comfortabel en compact mogelijk worden gemaakt
> - Gestalt wetten toepassen voor feedbackunit

## Bill of materials
- EVA-foam
- Velcrostrips
- zachte elastische stof
- PPG sensor: gelijkaardig aan polar verity sense, state of the art (Empatica embrace plus)
- Arduino nano 33 IOT
- Led strip +- 40cm

## Kritische reflectie

In het eerste semester van dit project hebben we ons vooral ingezet op zoveel mogelijk verschillende dingen testen en deze resultaten dan nog eens laten verifiëren. Hieruit hebben we veel geleerd voor ons uiteindelijk concept zo goed mogelijk te onderbouwen. 
Voor onze ideëen 

Voor dit te doen hebben we tijdens het prototypen alle mogelijke opties afgetast en van de beste een prototype gemaakt. Deze hebben we dan via een wave getest ([rapport wave 1](https://github.com/DePieter/BramPieter/blob/main/Rapport%20Althus.pdf)) 

In het eerste semester hebben we ons vooral ingezet op het wat we gaan prototypen. Hierbij ging het rond ergonomie van het product en de omtrend welke functies het moet hebben.

Rond de ergonomie kregen we enkele logische antwoorden zoals comfortabel zitten maar ook elke andere





## Bronnen
**Arduino**, van https://www.arduino.cc/

Seeed Studio. (n.d.). Grove - Vibration Motor, van https://wiki.seeedstudio.com/Grove-Vibration_Motor/
Seeed Studio. (n.d.). Grove - Speaker Plus, van https://wiki.seeedstudio.com/Grove-Speaker-Plus/
Seeed Studio. (n.d.). Grove - Red LED, van https://wiki.seeedstudio.com/Grove-Red_LED/


**Troubleshooting**
Arduino Forum. (2023). Nano 33 BLE not working when not connected to PC, van https://forum.arduino.cc/t/nano-33-ble-not-working-when-not-connected-to-pc/1117844																	

**Research (statistieken welbevinden): root-cause**
Wikipedia. (n.d.). Photoplethysmogram, van https://en.wikipedia.org/wiki/Photoplethysmogram
[^1]: Zorgnet-Icuro. (2024). KCE-rapport: Eén op vijf verpleegkundigen loopt grote kans op burn-out, van https://www.zorgneticuro.be/nieuws/kce-rapport-een-op-vijf-verpleegkundigen-loopt-grote-kans-op-burn-out
Vlaamse Overheid. (2023). Werkbaar werk in de zorg- en welzijnssector: Samenvatting, van https://publicaties.vlaanderen.be/view-file/49692
OSHA Europe. (2024). Gezondheid en welzijn in de zorgsector: Rapport, van https://osha.europa.eu/sites/default/files/healthcare%20sector%20-%20nl.pdf
SERV. (2023). Werkbaar werk in de zorg en welzijnssector 2023,, van https://www.serv.be/stichting/publicatie/werkbaar-werk-zorg-en-welzijnssector-2023
	
**Rapport: **
SERV. (2023). Werkbaar werk in de zorg- en welzijnssector 2023: Integrale versie, van https://www.serv.be/sites/default/files/documenten/SERV_20240703_WBM2023_WNS_zorg_StIA_RAP.pdf
Zorgnet-Icuro. (2024). Veel werkstressklachten in de zorg- en welzijnssector, van https://www.zorgneticuro.be/nieuws/veel-werkstressklachten-zorg-en-welzijnssector
HLN. (2024). Liefst 50 procent meer langdurig zieken in de zorgsector, van https://www.hln.be/binnenland/liefst-50-procent-meer-langdurig-zieken-in-de-zorgsector~a3671e65/
RIVM. (2024). Mentale gezondheid monitor: Burn-out klachten bij werkenden, van https://www.rivm.nl/mentale-gezondheid/monitor/werkenden/burn-out-klachten


**State of the art (in de zorg) **
Fedris. (2024). Pilootproject Burn-out: Samenvatting van de resultaten, van https://www.fedris.be/sites/default/files/assets/NL/Medische_documentatie_BZ/Burn_out/pilootproject_burn-out_-samenvatting_van_de_resultaten-_secured.pdf

**State of the art (tech)**

BIPR. (n.d.). HRV Tracker App voor Samsung Watch, van https://bipr.fr/hrv-tracker-app-samsung-watch
Pauser Health. (n.d.). Wearable technologie voor stressbeheer, van https://pauser.health/
Corti. (2024). Corti Wearable Setup Guide, van https://www.cortiwearable.com/corti-setup-guide

**Proof for concept**
JMIR Publications. (2024). Wearable Devices and Stress Management: A Systematic Review, van https://www.jmir.org/2024/1/e50253/
SpringerLink. (2023). Neural Networks for HRV Analysis in Workplace Settings, van https://link.springer.com/article/10.1007/s00521-023-08681-z#Sec21
ScienceDirect. (2023). Impact of Workplace Stress on HRV, van https://www.sciencedirect.com/science/article/pii/S0897189719301831?ref=pdf_download&fr=RR-2&rr=8f0cbe0b2e36b756

**Studies:**
PubMed Central. (2022). HRV Analysis in a Chinese Workplace Setting, van https://pmc.ncbi.nlm.nih.gov/articles/PMC8863599/

## Bijlagen

