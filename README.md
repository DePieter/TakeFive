# Take Five
Op basis van HRV (hartslagvariatie) en ruimte voor implementatie van cortisolsensoren pauzes voorstellen aan zorgpersoneel.

Projectteam: Demaegdt Pieter, Tops Bram, Schrijvers Finn

12/12/2024

## Samenvatting $${\color{red}herschrijven}$$

$${\color{red}versie-4-tekst:}$$
Een probleem is geanalyseerd door middel van user interviews, literatuurstudies en diverse analysemethoden, waaronder de 5W- en PESTEL-methoden. Uit deze analyses blijkt dat zorgverleners als gevolg van een hoge werkdruk frequent worden geconfronteerd met stress en burn-outklachten. Dit mechanisme leidt tot een vicieuze cirkel: zonder effectieve interventies blijft de werkdruk toenemen.

Om dit te mitigeren, wordt een innovatief systeem ontwikkeld dat stress continu monitort en op basis van deze gegevens dynamisch pauzes kan inplanten. Een draagbare stressmonitor, bevestigd op de bovenarm, verzamelt fysiologische data, waaronder hartslagvariabiliteit en cortisolniveaus. Deze realtimedata wordt geanalyseerd via een feedbackmodule; bij herhaaldelijke stresspieken genereert het systeem een pauzeadvies. Gedurende deze pauzes wordt een wetenschappelijk gevalideerde interventie aangeboden om de stressrespons effectief te reduceren.

Het ontwikkelde product, TakeFive, heeft als doel het mentale welzijn van zorgprofessionals te bevorderen door op kritieke momenten gerichte pauzes te faciliteren. Dit draagt bij aan het verlagen van het risico op burn-out en het verbeteren van de algehele werkervaring in de zorgsector.

$${\color{red}versie-5:}$$
Bijna 40% van de zorgverleners ervaart een te hoge werkstress [^1]. Dit wordt bevestigd door talloze onderzoeken, waaronder user interviews, literatuurstudies en diverse analysemethoden binnen dit project.
Langdurige blootstelling aan hoge stress leidt tot burn-outs, een van de grootste oorzaken van langdurig ziekteverzuim in de zorg. Tegelijkertijd kampen woonzorgcentra en ziekenhuizen al met ernstige personeelstekorten, waardoor de impact van uitval nog groter is.
Om dit probleem aan te pakken, wordt Take Five ontwikkeld: een innovatief systeem dat werkstress continu monitort en doordachte pauzes voorstelt. Een wearable op de bovenarm meet fysiologische signalen die wijzen op stress (hartslagvariabiliteit en cortisolniveau). Bij een te hoog stressniveau krijgt de zorgverlener een subtiele haptische melding. Tegelijkertijd geeft een discrete feedbackmodule de stress status weer en worden er wetenschappelijk onderbouwde pauzes voorgesteld. 
Dit verhoogt het stressbewustzijn bij zorgverleners, helpt burn-out te voorkomen en draagt bij aan een betere werkervaring in de zorg.

$${\color{red}versie-6:}$$
In de Belgische zorgsector ervaren veel zorgverleners een verhoogd risico op burn-out. Uit studies blijkt dat één op de vijf verpleegkundigen een grote kans op burn-out heeft[^2], en bijna 40% van de zorgverleners te veel werkstress ervaart[^1]. Dit leidt tot ziekteverzuim en heeft een aanzienlijke financiële impact: in 2021 werd meer dan 1,8 miljard euro uitgegeven aan arbeidsongeschiktheid door burn-out en depressie, een stijging van 59% sinds 2016.

Om deze problematiek aan te pakken, wordt Take Five ontwikkeld: een innovatief systeem dat werkstress monitort en op basis van fysiologische signalen zoals hartslagvariabiliteit en cortisolniveau pauzes voorstelt. De wearable geeft subtiele meldingen bij hoge stressniveaus en stelt wetenschappelijk onderbouwde pauzes voor. Dit verhoogt het stressbewustzijn, helpt burn-out voorkomen en verbetert de werkervaring in de zorg.

![image](https://github.com/user-attachments/assets/f6e94998-e4ee-4921-ab7d-250a4c4f87e3)

## Introductie
Max 300 woorden. Kader je project. Introduceer het probleem en jouw doelstellingen (inclusief boundary conditions). Maak gebruik van bronverwijzingen

Zorgverleners ervaren veel stress, dit is voornamelijk het gevolg van hoge werkdruk. Dit blijkt uit zowel interviews met zorgverleners als literatuuronderzoek, waaronder wetenschappelijke artikelen zoals het rapport van Zorgnet-Icuro [^2] dit bevestigd, zo heeft 1 op de 5 zorgverleners een grote kans een burn-out op te lopen. In de zorgsector is personeelstekort een groot probleem, daarom is het belangrijk om in te zetten op stimulatie en welzijn van zorgverleners om zo het werk aangenaam en stresloos te houden. Take Five speelt in op de stres van zorgverleners met een systeem dat d.m.v. een stresmeting pauzes voorstelt, waardoor gebruikers minder stres zullen ervaren. Take Five biedt een gebruiksvriendelijk ontwerp waabij de stakeholders zoals de zorgverleners maar ook collega's en bewoners centraal staan.
> _Op welke manier kan de stress bij woonzorgmedewerkers verlaagt zonder dat dit het werk verstoord?_

$${\color{red}nieuwe-tekst:}$$
> _Ieder jaar wordt er 280 miljoen euro gespendeert aan burnouts in de zorgsector._ [^3]

In de Belgische zorgsector is het welzijn van zorgverleners een groeiende bezorgdheid. Recente studies tonen aan dat een aanzienlijk aantal verpleegkundigen een verhoogd risico op burn-out heeft. Volgens een onderzoek van het Federaal Kenniscentrum voor de Gezondheidszorg (KCE) heeft één op de vijf verpleegkundigen een aanzienlijke kans op burn-out [^2].

Burn-outs in de zorg zijn een cumulerend probleem, waarbij verschillende factoren elkaar versterken. Hoge werkdruk, personeelstekorten, emotionele belasting en beperkte autonomie stapelen zich op, waardoor zorgprofessionals steeds meer onder druk komen te staan. Het gebrek aan voldoende herstelmomenten maakt het moeilijk om op te laden, wat het risico op burn-out vergroot. Dit creëert een vicieuze cirkel die het probleem steeds verergert.

TakeFive heeft als doel een product te ontwikkelen dat zorgverleners ondersteunt in hun herstel, door op de juiste momenten in te grijpen, en zo het risico op burn-out te verlagen. Hierbij staat zowel de zorgverleners als de bewoners centraal.
> _Op welke manier kan de stress bij woonzorgmedewerkers verlaagt zonder dat dit het werk verstoord?_

## Methodologie
Als eerst werd de opdracht verkend: Wat is het doel van de opdracht? Welke problemen doen zich voor, kunnen deze problemen gekoppeld worden aan bestaande oplossingen? Deze opdracht startte met het verkennen van de designchallenge Werkbaar Werk in de Zorg met de bijhorende noden en behoeften [^5].
User interviews bevestigden dat stress op de werkvloer een groot probleem is. Literatuuronderzoek toonde aan dat burn-outs een aanzienlijk risico vormen, terwijl methoden zoals de 5WH-methode en PESTEL-analyse kerninzichten werden geïdentificeerd.

In de definitiefase wordt het probleem verder verkend met een meer praktische aanpak, rekening houdend met het principe "fall in love with the problem, not the solution." Tijdens deze fase worden de eerste prototypes ontwikkeld en testen we zo snel mogelijk of het concept levensvatbaar is voor verdere verfijning. Dit gebeurt in een vroege concepttest met verpleegkundigen in WZC Altus. De feedback uit deze testfase wordt verwerkt in een verbeterde prototypeversie, die gedurende een week werd getest bij VZW De Oever. Aan het einde van deze testperiode werd een groepsinterview georganiseerd om alle relevante feedback te verzamelen. De verkregen data dient als basis voor de verdere verfijning van de design requirements, zodat het uiteindelijke ontwerp beter aansluit bij de behoeften en verwachtingen van de stakeholders.

Deze iteratieve aanpak vormt de kern van het ontwerpproces, waarbij in volgende fasen steeds opnieuw getest zal worden met nieuwe en/of verfijnde prototypes. Tegelijkertijd bieden deze tests waardevolle inzichten in de gebruiker, waardoor hun behoeften nog beter in kaart kan worden gebracht wat leid tot design requirements die als leidraad dienen gedurende het hele proces. Het opstellen van de product concepten werd telkens ondersteund door storyboarding en de MoSCow-methode.

De ontwerpmethodologie van dit proces is vastgelegd in onderstaande visuele tijdlijn.

![image](https://github.com/user-attachments/assets/c614b507-29a8-4925-a491-5f30c9200e24)



## Discovery
De discovery fase draait rond het definieren van de probleemruimte waarbij de focus daadwerkelijk ligt op het definiëren van het probleem en niet op het maken van een product. Nadat de probleemruimte is afgebakend, geven de user interviews aan welke problemen er best worden aangepakt om uiteindelijk een goed geformuleerde "how might we" te bekomen. Concreet wordt dit eerste, onderzoekende deel ondersteund door user interviews, literatuurstudies, 5WH- en PESTEL-methode, welke allen bijdragen tot het identificiëren van kerninzichten.

### Probleemruimte $${\color{red}aanvullen}$$
De probleemruimte bakend zich af...

### Doestellingen
Een goed geformuleerde "how might we" vormen voor de probleemruimte.

### Materiaal & methoden
- User interviews (N=3)
- Literature reviews (N=10)
- 5W-methode
- PESTLE methode

### User interviews (N=3) $${\color{red}herwerken}$$
Hier zit je nog steeds in de discovery fase, je bent nog aan het onderzoeken wat het probleem is, je zou hier nog niet bezig mogen zijn met een concept.

Aan de hand van user interviews kunnen de bevindingen over de toepassingen van een stressmonitor in de zorgsector worden opgenomen. De inzichten die hieruit voortkomen kunnen de effectiviteit, mogelijke hindernissen en ontwerpimplicaties identificeren.
Hieruit werd bevestigd dat werkdruk binnen de zorg hoog ligt en daarom als probleem kan worden gezien. Hiervoorzijn er drie interviews afgelegd bij studentes uit de richting verpleegkunde. Dit omdat ze gedurende hun opleiding op verschillende afdelingen stage lopen en zo tal van problemen tegenkomen en inzichten in verkrijgen.
Tijdens deze interviews zijn er vragen gesteld omtrent het bevinden van een stressmonitor, werkdruk en hoe deze juist in een bepaalde omgeving zou passen. Aan de hand van 5W- en de PESTLE methode werden de antwoorden extra bevestigd en verfijnd.

### Literature reviews (N=10) $${\color{red}herwerken}$$
Hier zit je nog steeds in de discovery fase, je bent nog aan het onderzoeken wat het probleem is, je zou hier nog niet bezig mogen zijn met een concept.

De haalbaarheid vormt een cruciaal aspect binnen dit project. De meetbare parameters van het menselijk lichaam, de zogenaamde biomarkers, vereisen bijzondere aandacht, evenals de technologieën en methoden voor hun meting. In dit kader zijn de volgende thema’s onderzocht:
- Doelgroep
- Jaarlijkse kost en evolutie van het probleem
- Biomarkers
- Oorzaken van Burn-out
- Huidig onderzoek omtrent biomarkers en meetbaarheid van burnout
- Burnout preventie en interventie
- Technische haalbaarheid

### 5W methode $${\color{red}aanvullen}$$
Wat is het, waarom is het nuttig, hoe werkt het, wat heb je er uit geleerd?

### PESTLE methode $${\color{red}aanvullen}$$
Wat is het, waarom is het nuttig, hoe werkt het, wat heb je er uit geleerd?

### Conclusie
#### Oorzaken en Gevolgen
- Personeelstekorten leiden tot langere shifts en kortere pauzes. In veel gevallen worden pauzes zelfs volledig overgeslagen bij een verhoogde werkdruk, wat resulteert in een verdere toename van stressniveaus. Onderstaande grafiek toont aan dat werkdruk een aanzienlijke impact heeft op de werk-privébalans van een groot deel van het personeel.

<div style="display: flex; justify-content: center;">
    <img src="Map foto's2/graph.jpg" style="width: 50%;">
</div>

- Burn-out Statistieken: Sinds de pandemie is langdurig ziekteverzuim met 50% toegenomen. De geschatte jaarlijkse kosten voor burn-out in de zorgsector bedragen ongeveer €228 miljoen, met een stijging van 10% in vijf jaar.
- Dubbel Negatief Effect: Verhoogde werkdruk leidt niet alleen tot meer stres, maar ook tot het uitstellen of overslaan van pauzes, wat het probleem verder verergert.
- Kosten en Trends: Burn-out blijft een groeiend probleem met substantiële economische en sociale impact. Preventieve maatregelen zijn daarom essentieel.
- Oorzaak van Stres: Werkdruk is de belangrijkste drijfveer achter stress, versterkt door personeelstekorten en een gebrek aan structurele oplossingen.

#### Inzichten uit Onderzoek
Deze discoveryfase heeft inzicht gegeven in zowel het probleem als de betrokken stakeholders (verpleegkundigen in WZC). Door middel van interviews, literatuurstudie, de 5W-methode en PESTLE-analyse zijn de eerste design requirements vastgesteld. Deze vormen de basis voor de volgende definitionfase. Hieronder worden de design requirements die zijn vastgesteld in de discoveryfase neergeschreven. In deel $${\color{red}XXX}$$ is een samenvattende tabel opgenomen met alle design requirements van het volledige project.

> [!IMPORTANT]
> Design Requirements: $${\color{red}aanvullen}$$
> wat heb je geleerd uit de interviews, PESTLE, 5W,...? kan iets zijn zoals:
> -  Real-time Monitoring: De geïnterviewde verpleegkundigen benadrukken dat real-time monitoring van stressniveaus cruciaal is, omdat ingrepen momenteel vaak te laat komen. Direct inzicht in stressniveaus stelt gebruikers in staat sneller te reageren en stress te beheersen voordat het zich opstapelt.
> - Gebruiksvriendelijk Ontwerp: verpleegkundigen geven aan dat ze fysiek zo ongestoord mogelijk kunnen doorwerken.
> - ...
> - ...
> - ....
> - ...
> - ...

## Definition
In de definitiefase worden mogelijke oplossingen onderzocht die inspelen op het eerder gedefinieerde probleem, met als doel een onderbouwde conceptkeuze te maken. Dit concept vormt de basis voor verdere ontwikkeling in de develop en deliver fasen. De definitiefase wordt opgedeeld in twee waves, waarbij het concept per wave steeds verder wordt verfijnd.

### Doelstellingen
- Het ontwikkelen van concrete prototypes die de geïdentificeerde problemen aanpakken.
- Het testen en evalueren van deze prototypes in realistische scenario's om de haalbaarheid te verifiëren.
- Het verzamelen van gebruikersfeedback om de prototypes verder te verbeteren.

### Materiaal & methoden $${\color{red}aanvullen}$$
Twee waves die gebruik maken van volgende methodologiën:
- Design sketches
- Storyboarding
- MoSCow
- Prototyping
- User testing
  
### **Wave 1 (N=5)**
---
#### Ideation $${\color{red}Aanvullen+foto's}$$
Voor wave 1 hebben we onderzocht waar we de wearable kunnen plaatsen. De mogelijke locaties worden bepaald door medische richtlijnen en de geschiktheid voor hartslagmeting. Uiteindelijk blijven er drie opties over: de borst, de benen en de bovenarm. De benen vallen af vanwege het sociale stigma rondom enkelmonitors.

<p align="left">
  <img src="Map foto's2/Wave 1/Design wave 1.png" style="height:200px;">
	  <img src="Map foto's2/Wave 1/slagadren-lichaam.jpg" style="height:200px;">
	  <img src="Map foto's2/Wave 1/design wave 1.1.png" style="height:200px;">
</p>

#### Storyboarding $${\color{red}Aanvullen+foto's}$$
De zorgmedewerker arriveert op het werk, pakt de wearable en doet deze om. Zodra ze het apparaat inschakelt, verschijnt er een lichtsignaal. Enkele uren later voelt ze een trilling, wat aangeeft dat het tijd is voor een korte pauze. Na ongeveer vijf minuten hervat ze haar werk. Aan het einde van haar shift plaatst ze de wearable op de oplader.
<p align="left">
  <img src="Map foto's2/8112e892-8d4c-4fd9-b0f8-bdf00dfc6cca.JPG" width="45%">
</p>

#### MoSCow $${\color{red}Aanvullen+foto's}$$
| Must                  | Should              | Could               | Wouldn't                 |
|-----------------------|--------------------|---------------------|--------------------------|
| Easily cleanable     |Be stuck in one place | Er leuk uit zien  | Luid zijn               |
| Positieve feedback  | Licht maken        | Notify others | Be intrusive         |
| Low cost            | Always be with the person     | Kunnen snoozen      | Annoying                |
| Notify higher ups | Teambuilding pauzes |    | Attract the user while it shouldn’t |
| Leuke interacties| Be connected to WiFi/have memory |  |   |


#### Prototyping $${\color{red}Herschrijven}$$
Er zijn vier verschillende prototypes ontwikkeld: twee voor de feedbackunit en twee voor de sensor. Dit maakt het mogelijk om meerdere testpersonen tegelijk te laten testen. Voor de feedbackunit hebben we alle mogelijke signaleringsmethoden geïntegreerd in twee compacte apparaten, die op afstand kunnen worden aangestuurd met onze gsm. Hieronder worden de prototypes weergegeven en beschreven.
<table>
  <tr>
    <td><img src="Map foto's2/Wave 1/Wave 1 armbandsensor.2.png"  style="width:200px;">
	  <td><img src="Map foto's2/Wave 1/Wave 1 armbandsensor.png" style="width:200px;">
    <td>De <b><u>armband sensor:</u></b> bestaat uit een ge-3D-printe body met een elastieken band, deze kan gedragen worden op de bovenarm.</td>
  </tr>
  <tr>
    <td><img src="Map%20foto's2/Schermafbeelding%202025-01-07%20205720.jpg" style="width:200px;">
	  <td><img src="Map foto's2/Wave 1/Wearable borstkas.jpeg"  style="width:200px;">
    <td>De borstkas-wearable bestaat uit twee verstelbare riemen met een 3D-geprinte behuizing, zodat hij naar wens kan worden aangespannen. <b><u>          </td></td>
  </tr>
  <tr>
    <td><img src="Map%20foto's2/Schermafbeelding%202025-01-07%20205708.jpg"style="width:200px;">
	  <td><img src="Map foto's2/Wave 1/Feedbackunit.png" style="width:200px;">
    <td>De <b><u>feedback unit:</u></b> De FeedbackUnit is een MDF-behuizing met ingebouwde elektronica, waarmee alle signaalmethoden, zoals geluid en licht, kunnen worden getest.           </td></td>
  </tr>
</table>

#### User testing
Tijdens deze gebruikerstest worden de eerste prototypes getest in WZC Althus a.d.h.v. het testing protocol wave 1 (zie [Bijlagen](#bijlagen)) Het doel van deze eerste tests is vooral om de levensvatbaarheid van het concept te verifiëren om ze vervolgens in een volgende test het concept correct te kunnen bijsturen en meer te kunnen focussen op details. Hieronder staan de belangrijkste waarnemingen toegelicht, deze waarnemingen worden gebruikt om de design requirements vast te leggen, zoals te zien in het volgende deel "Conclusies & implicaties". Ook het verslag van deze eerste test is terug te vinden al "Rapport wave 1" in [Bijlagen](#bijlagen).

- beschrijf hier de waarnemingen van de eerste test adhv ruwe data (=foto's) -> voorbeeld: "verpleegkundige Julie vertelde dat de borstband sensor ongemakkelijk zat, dus ligt de voorkeur meer bij de armband sensor"
- Voorbeeld: Jonatan gaf aan dat hij de aanwezigheid van fysieke knoppen mistte.
- ...
- ...

Toe te voegen quote: Als ik nog een keer zou kunnen kiezen, kies ik voor de armband.

#### Conclusies & implicaties:
Het hoofddoel van wave 1 betreft het goed- of afkeuren van de conceptuele werking. Dankzij de nuttige feedback bij onderanderen de eerste gebruikerstesten, bied deze test meer dan enkel een antwoord op het hoofddoel en kunnen er reeds al enkele ontwerpdetails vast gelegd worden. Als concusie kan er worden verdergewerkt met dit concept en dient er rekening gehouden te worden met volgende design requirements:

> [!IMPORTANT]
# Design Requirements  

## 1. Gebruikersbehoeften  
-  **Discretie**: Het apparaat moet subtiel zijn en geen ongewenste aandacht trekken.  
-  **Niet-auditieve feedback**: Gebruik trillingen en/of licht in plaats van geluidssignalen.  
-  **Aanpasbaarheid**: Gebruikers moeten meldingsfrequentie en intensiteit kunnen instellen.  

## 2. Functionaliteit  
-  **Naadloze integratie**: Mag lopende taken niet verstoren en moet eenvoudig in bestaande workflows passen.  
-  **Niet-invasieve feedback**: Gebruik visuele en tactiele signalen, vermijd storende geluiden.  
-  **Gezondheidsbevordering**: Ondersteuning voor ademhalingsoefeningen en pauzemeldingen.  

## 3. Ontwerpcriteria  
-  **Compact & draagbaar**: Lichtgewicht en comfortabel voor dagelijks gebruik.  
-  **Modulair systeem**: Instelbare meldingen en mogelijkheid om functies aan/uit te zetten.  

## 4. Prototyping & Testing  
-  **Gebruiksvriendelijkheid**: Het systeem moet intuïtief en eenvoudig te bedienen zijn.  
-  **Pauzebeheer**: Effectieve methoden testen om pauzes te stimuleren in drukke omgevingen.  

## 5. Implementatie in de zorg  
-  **Beleidsondersteuning**: Samenwerking met zorginstellingen voor brede adoptie.  
-  **Sociale acceptatie**: Discreet en universeel ontwerp om stigma te minimaliseren. 

De bekomen design requirements worden gebruikt om het ontwerp aan te passen en te verbeteren. In de volgende wave wordt dezelfde structuur zoals bij wave 1 opnieuw toegepast: Design sketches -> Storyboarding -> MoSCoW -> Prototyping -> User testing


### **Wave 2 (N=5)**
---
#### Design sketches $${\color{red}Aanvullen+foto's}$$
blablabalbalaba, fotos,

#### Storyboarding $${\color{red}Aanvullen+foto's}$$
blablabalbalaba, fotos,

#### MoSCow $${\color{red}Aanvullen+foto's}$$
blablabalbalaba, fotos,

#### Prototyping $${\color{red}Aanvullen+foto's}$$
blablabalbalaba, fotos,

#### User testing
Woonzorgcentrum De Oever  
balbalabaablba, fotos,...


Hiervoor hebben we een prototype gemaakt voor op de bovenarm. Dit werd met een handleiding en uitleg gegeven aan de medewerkers die het dan elk voor één hele voormiddag (8u tot 12u) zouden dragen. Hierbij hebben ze om het uur oefeningen (ademhalen, babbelen,...) moeten doen voor hun stress te verminderen. Na iedere test heeft de medewerker enkele vragen ingevuld omtrend de oefeningen. Op het einde van alle testen hebben we nog een groepsgesprek gedaan met alle testpersonen.

### Conclusies & implicaties: $${\color{red}Herschrijven}$$

Dit is geen goede conclusie, dit is gewoon een opsomming

Duidelijke meldingen zijn handig, een lichtje valt soms niet op.
Er is een mogelijkheid voor het in de werkkar te verwerken.
Er is een nood aan zo'n type product.
Er is geen algemene oefening voor stress te verminderen.

- Meldingen mogen duidelijker
- Meldingen moeten kunnen worden afgezet
- Lightweight en compacte wearable
- Oefeningen zijn afhankelijk van de persoon
- Het prototype zou kleiner mogen.
<p align="center">
  <img src="Map foto's2/chest.jpeg"  alt="Description" style="height:200px;"></td>
  <img src="Map foto's2/6f352712-c0cb-4798-a1ff-b761aba4c04a.jpeg"  alt="Description" style="height:200px;"></td>
  <img src="Map foto's2/9bd2bdc9-50aa-4ac4-92f9-c93c5c681178.jpeg"  alt="Description" style="height:200px;"></td>
  <img src="Map foto's2/0ace9e9f-990d-4388-912e-3b2dec61f7fc%20(1).jpeg"  alt="Description" style="height:200px;"></td>
</p>

> [!IMPORTANT]
> Design requirements
> - De feedbackunit moet verwerkt worden in de zorgkar
> - De voorgestelde oefeningen moeten effectief zijn en passen in de workflow
> - De draagconfiguratie moet op de bovenarm worden gedragen
> - De draagconfiguratie moet zo comfortabel en compact mogelijk worden gemaakt
> - Gestalt wetten toepassen voor feedbackunit

# Devellop
De devellop fase draait rond het verfijnen van het product. Hiervoor wordt de fysieke ergonomie, de cognitieve en de sensoriële ergonomie geoptimaliseerd aan de hand van theorie, prototyping en testing.

### Doelstellingen
- Prototype verfijnen
- Belangrijkste design challenges identificeren door zowel theoretisch als praktisch onderzoek

### Materiaal & methoden
$${\color{red}X}$$ Waves die gebruik maken van volgende methodologiën:
- Brainstorming
- Design sketches
- Storyboarding
- MoSCoW
- Prototyping
- User testing

### **Wave 3 (N=5)** 
Hoewel de devellopfase zich voornamelijk richt op het verfijnen van het product, bevindt wave 3 zich deels nog in de discoveryfase. Dit komt doordat het concept is uitgebreid met extra componenten, zoals de feedback unit en de verificator. In wave 3 worden deze nieuwe componenten gevalideerd (discovery), terwijl tegelijkertijd zoveel mogelijk aspecten van de ergonomie worden getest (devellop).

#### Brainstorming
Wave 2 toonde aan dat er behoefte was aan een manier om aan te geven wanneer iemands stressniveau te hoog is. Belangrijk hierbij is dat de feedback losstaat van de wearable om triggerblindness te voorkomen.  

Om een bruikbaar idee te ontwikkelen, begon het proces met een individuele brainstormsessie per teamlid. Elk teamlid werkte één of meerdere concepten uit en beschreef alle eigenschappen op grote A3-bladen. Vervolgens werd via dotvoting bepaald welke eigenschappen waardevol waren voor het concept en welke moesten worden uitgesloten.

De brainstorming heeft geleid tot het implementeren van een systeem bestaande uit 3 verschillende componenten, welke een eerste vorm krijgen in het volgende deel: _Design sketches_.

<div style="text-align: center;">
    <img src="https://github.com/user-attachments/assets/9e8579e4-fb43-4dba-90e5-df71e67afc22" style="width: 50%;" />
</div>

#### Design sketches $${\color{red}herschrijven}$$

Deze tekst staat hier niet echt op zn plaats, er moet hier iets staan dat rechtstreeks gaat over de schetsen bijvoorbeeld: de resultaten, het proces, zaken die moelijk te schetsen waren ofzo, digen die interessant en relevant zijn.

Voor wave 3 is besloten om met een verificator te werken, zodat gecontroleerd kan worden of er daadwerkelijk een pauze wordt genomen. Dit is geïmplementeerd als een handmatig bedienbare gieter met behulp van Protopie. De wearable uit wave 2 wordt hergebruikt. Als feedbackunit gebruiken we momenteel een bloem, waarvan de kleur en status (bijvoorbeeld verwelkt) handmatig kunnen worden aangepast.

| Product | Concept schetsen |
|------|------|
| Feedback Unit |  <img src="Map foto's2/Plant sketch.png" style="width: 25%;">  <img src="Map foto's2/Plant sketch.png" style="width: 25%;"> <img src="Map foto's2/Plant sketch.png" style="width: 25%;">|
| Verificcator | ![image](https://github.com/user-attachments/assets/78cd7d1d-c96a-477c-b7b8-9eb2b418191d)  ![image](https://github.com/user-attachments/assets/78cd7d1d-c96a-477c-b7b8-9eb2b418191d) ![image](https://github.com/user-attachments/assets/78cd7d1d-c96a-477c-b7b8-9eb2b418191d)|

#### Prototyping $${\color{red}aanvullen}$$
Hier relevante tekst rechtstreeks over het prototypen zoals bv het doel ervan, hoe we aan de slag zijn gegeaan (theoretische kapstokken), resultaten,... De beschrijving zelf staat hieronder al in de tabel. Probeer ook in deze tekst te verwijzen naar deze tabel ("de prototypes worden in onderstaande tabel weergegeven") -> eigenlijk moet je bij elke figuur, tabel,... zo'n verwijzing maken.

| *deftige foto’s wearable* | **Wearable:** Beknopte beschrijving |
|----------------------------|------------------------------------|
| ![image](https://github.com/user-attachments/assets/76697e9d-4312-4f01-925e-721249912be6)| **Feedback unit (hoofdfocus):**<br>Elke gebruiker heeft een eigen bloem op zijn/haar zorgkar staan. De bloem gaat slapper hangen naarmate het stressniveau toeneemt.<br><br>Zodra de bloem volledig slap hangt, zal de kleur van de bloempot rood kleuren. Op dat moment is het tijd om de bloem water te geven → pauze nemen. |
| ![image](https://github.com/user-attachments/assets/742783c9-0507-4413-a6cd-65177d9d8c5e)| **Verificator (gieter):**<br>Wanneer de bloem aangeeft dat het tijd is voor een pauze (door slap te hangen en een rode pot te tonen), moet deze bij de **verificator (gieter)** worden geplaatst.<br><br>De verificator herkent de eigenaar van de bloem en stelt verschillende pauzes voor. De gebruiker kiest een pauze, waarna de verificator de starttijd registreert. Kort voor het einde van de pauze trilt de wearable om aan te geven dat het tijd is om het werk te hervatten.<br><br>Hierbij moet de gebruiker de pauze met een knop op de verificator stoppen. Indien de pauze goed is uitgevoerd, heeft men water verdiend om de bloem weer gezond te maken (bloem rechtop en pot kleurt groen). |
| *deftige foto’s interface* | **Interface:** Beknopte beschrijving, zorg dat het goed aansluit op de beschrijvingen hierboven. |

#### Storyboarding $${\color{red}aanvullen}$$

Geef eerst een soort korte inleiding waarin je beschrijft waarom je gekozen hebt voor sotryboarding (bv omdat dit de eerstlijns fouten al uit het systeem kan halen alvorens het ontwikkelen van de prototypes) -> zie tekstje onder titeltje "wave 3".

Verwijzing naar video's, zorg voor een mooie stuctuur (mss kan een tabel ofzo hierbij helpen??-> vraag aan copilot??)

Hier ontbreken curciale dingen in de storyline, zorg dat je een volledig, gedetailleerd verhaal bekomt-> voorbeeld: VPK (verpleegkundige) is al voor een lange tijd aan het werk en is gestrest-> wearable trilt -> VPK ziet dat de bloem slap hangt en dat de bloempot rood is gekleurd->....

In fase 1 begint de bloem (FU) te verwelken.
<p align="left">
  <img src="Map foto's2/Storyboard wave 3.1.png" width="45%">
</p>
In fase 2 merkt de zorgmedewerker op dat de bloem verwelkt is.
<p align="left">
  <img src="Map foto's2/Storyboard wave 3.2.png" width="45%">
</p>
In fase 3 brengt de zorgmedewerker de FeedbackUnit (FU) naar de verificator (gieter) en plaatst deze erbij.
<p align="left">
  <img src="Map foto's2/Storyboard wave 3.3.png" width="45%">
</p>
In fase 4 interacteert de zorgmedewerker met de verificator om een pauze te kiezen. Zodra de keuze is gemaakt, verschijnt een menu met alle collega’s die op dat moment pauzeren. Vervolgens kan de verificator worden gebruikt om de bloem water te geven, waardoor deze weer begint te bloeien.
<p align="left">
  <img src="Map foto's2/Storyboard wave 3.4.png" width="45%">
</p>

#### User testing 
Door een uitgebreide MoSCoW-methode te combineren met brainstorming en roleplay, is een waardevolle tabel opgesteld. Deze leidt tot concrete ontwerpvragen, design requirements en aandachtspunten voor de concepttests, zoals beschreven in het [MoSCoW-document](https://ugentbe-my.sharepoint.com/:w:/g/personal/bram_tops_ugent_be/Ec037Kdu9NpClCjT8NW92lIBiGvA1C8_lfeysg7QbH_XUQ?e=BL1XDJ).
Om deze ontwerpvragen te beantwoorden, werd een gebruikerstest uitgevoerd. Hiervoor werd telefonisch contact opgenomen met WZC Panhuys Gent. Aangezien gebruikers aan de test deelnamen, ondertekende elke deelnemer een ‘informed consent’, terug te vinden in de bijlagen.
De concepttest heeft als doel antwoord te krijgen op volgende ontwerpvragen:

**Conceptuele validatie (Definition-fase)**
- In welke mate sluit de voorgestelde pauzestrategie aan bij de noden en verwachtingen van zorgmedewerkers? (=wat is de opinie van de gebruiker)?
- Hoe betrouwbaar en consistent functioneert het systeem onder verschillende werkomstandigheden en stressniveaus?
- Welke drempels ervaren gebruikers bij het gebruik van het systeem, en hoe kunnen deze worden verminderd?
- Is een verificator (zie Prototypes) noodzakelijk, of volstaat het als de feedbackunit zelf aangeeft welke pauze genomen moet worden, bijvoorbeeld via een geïntegreerd display?
- Kan het systeem omzeild worden (bv. te weinig of te veel pauze nemen) en hoe kan dit e.v.t. worden opgelost?

**Ergonomische aspecten (Development-fase)**
- Hoe intuïtief en toegankelijk is de interactie met het systeem voor zorgmedewerkers in een veeleisende werkomgeving?
- Welke vorm/uiterlijk van de feedback unit biedt de beste sensoriele ergonomie aan de gebruiker?
- Hoe beïnvloedt dit systeem de cognitieve belasting en werkprestaties?
- Worden de meldingen en suggesties van het systeem als helpend of storend ervaren tijdens het werk?
- Hoe goed past het systeem binnen de bestaande workflow van zorgmedewerkers zonder extra stress of werkdruk te veroorzaken?

De geanalyseerde data wordt vertaald naar antwoorden op de ontwerpvragen, wat leidt tot verschillende design requirements. Deze zaken zijn terug te vinden in concepttestrapport 3.1.

#### Conclusies & implicaties 
zie opbouw van vorige waves

> [!IMPORTANT]
> Design Requirements: $${\color{red}aanvullen}$$
> -  alle design requirements van wave 1
> -  ...
>

## Bill of materials
- EVA-foam
- Velcrostrips
- zachte elastische stof
- PPG sensor: gelijkaardig aan polar verity sense, state of the art (Empatica embrace plus)
- Arduino nano 33 IOT
- Led strip +- 40cm

## Kritische reflectie

In het eerste semester van dit project hebben we ons gericht op het testen van een breed scala aan mogelijkheden en het verifiëren van de resultaten. Dit proces heeft ons waardevolle inzichten opgeleverd, die we hebben gebruikt om ons uiteindelijke concept goed te onderbouwen.

Bij het prototypen van de waves hebben we verschillende opties onderzocht, met behulp van tools zoals Arduino. Deze prototypes hebben we vervolgens geëvalueerd door middel van gebruikerstesten, waarbij we ons vooral hebben gefocust op de ergonomie en de discretie van de prototypes.

Voor het vervolg van het project zullen we ons voornamelijk richten op twee zaken, zonder de eerdere iteraties uit het oog te verliezen:
- Het correct regelen van de pauzes: We willen pauzes beter afstemmen op de drukte, bijvoorbeeld door in stressvolle periodes minder snel een pauze voor te stellen of pauzes te baseren op de oorzaak van de stress (snel stijgend, geleidelijk stijgend, etc.).
- Het ontwikkelen van de apparatuur (wearable en feedback-unit) zodat deze voldoet aan alle ontwerpvereisten.







## Bronnen
**Arduino**, van https://www.arduino.cc/

Seeed Studio. (n.d.). Grove - Vibration Motor, van https://wiki.seeedstudio.com/Grove-Vibration_Motor/
Seeed Studio. (n.d.). Grove - Speaker Plus, van https://wiki.seeedstudio.com/Grove-Speaker-Plus/
Seeed Studio. (n.d.). Grove - Red LED, van https://wiki.seeedstudio.com/Grove-Red_LED/


**Troubleshooting**
Arduino Forum. (2023). Nano 33 BLE not working when not connected to PC, van https://forum.arduino.cc/t/nano-33-ble-not-working-when-not-connected-to-pc/1117844																	

**Research (statistieken welbevinden): root-cause**
Wikipedia. (n.d.). Photoplethysmogram, van https://en.wikipedia.org/wiki/Photoplethysmogram
Zorgnet-Icuro. (2024). KCE-rapport: Eén op vijf verpleegkundigen loopt grote kans op burn-out, van https://www.zorgneticuro.be/nieuws/kce-rapport-een-op-vijf-verpleegkundigen-loopt-grote-kans-op-burn-out
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
- Discovery
  - Interview
    - 
    -  
  - Literatuurstudie
    - 
    - 
- Definition
  - Testing
    - Wave 1
      - ([Protocol wave 1](https://github.com/DePieter/TakeFive/blob/4b8e9608bba9a341723f234646f2ddbe53b7283a/Protocols/Interview%20Protocol%20Althus.pdf)) 
      - ([Rapport wave 1](https://github.com/DePieter/TakeFive/blob/4b8e9608bba9a341723f234646f2ddbe53b7283a/Reports/Rapport%20Althus.pdf)) 
    - Wave 2
      - ([Protocol wave 2](https://github.com/DePieter/TakeFive/blob/4b8e9608bba9a341723f234646f2ddbe53b7283a/Protocols/Testprotocol-de%20oever.pdf)) 
      - ([Rapport wave 2](https://github.com/DePieter/TakeFive/blob/4b8e9608bba9a341723f234646f2ddbe53b7283a/Reports/Report%20De%20Oever.pdf))
    - Wave 3
      - ([Protocol wave 3]()) link nog in te vullen
      - ([Rapport wave 3]()) link nog in te vullen
- Develop
    - Wave 1
      - ([Protocol wave 1]()) link nog in te vullen
      - ([Rapport wave 1]()) link nog in te vullen
    - 



[^1]: https://www.hln.be/binnenland/helft-zorgverleners-kampt-met-te-veel-stress-op-het-werk~a46bdd30/?referrer=https%3A%2F%2Fwww.google.com%2F
[^2]: Zorgnet-Icuro. (2024). KCE-rapport: Eén op vijf verpleegkundigen loopt grote kans op burn-out, van https://www.zorgneticuro.be/nieuws/kce-rapport-een-op-vijf-verpleegkundigen-loopt-grote-kans-op-burn-out
[^3]: https://www.vzinfo.nl/overspannenheid-en-burn-out/zorguitgaven#:~:text=De%20zorguitgaven%20voor%20burn%2Dout,aan%20de%20gezondheidszorg%20in%20Nederland.
[^4]: https://www.agnesnibbeling.nl/burn-outs-in-de-zorgsector/
[^5]: Noden- en behoeftenanalyse van personeel in de zorg- en welzijnssectoren en maatwerkbedrijven. (z.j.). Ongepubliceerd document
