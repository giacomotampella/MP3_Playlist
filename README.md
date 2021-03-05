# MP3_Playlist
## Programma C++ che definisce una struct MP3e crea un array (playlist) di tracce MP3

[struct_mp3] Definire una struct Mp3 che contenga le informazioni base di una traccia musicale (titolo, album, artista, anno, durata). Definire poi
	un array playlist che contenga n tracce Mp3. Creare infine le seguenti functions:
	
- void stampa_traccia(Mp3 track);  stampa i dati della traccia 
	
- void stampa_album(Mp3[] playlist, int n, char album[]);  stampa le tracce dell'album con il
  nome indicato 
	
- int durata_playlist(Mp3 playlist[], int n);  restituisce la durata totale in secondi della
	playlist 
	
- Creare un main() che carichi l'array e utilizzi le functions precedenti. Si ricorda che con la function strcmp(str1, str2) è possibile
	confrontare due stringhe (se il valore restituito é 0 allora str1 è uguale a str2).

Esempio di funzionamento del programma: 

    Numero canzoni playlist: 3

    Titolo: Snow
    Album: Stadium Arcadium
    Artista: Red Hot Chili Peppers
    Anno: 2006
    Durata (in secondi): 334

    Titolo: Californication
    Album: Californication
    Artista: Red Hot Chili Peppers
    Anno: 1999
    Durata (in secondi): 322

    Titolo: Wish You Were Here
    Album: Wish You Were Here
    Artista: Pink Floyd
    Anno: 1975
    Durata (in secondi): 318


    LA TUA PLAYLIST:

    TRACCIA n. 1: Red Hot Chili Peppers - 2006 - Stadium Arcadium - Snow(334).

    TRACCIA n. 2: Red Hot Chili Peppers - 1999 - Californication - Californication(322).

    TRACCIA n. 3: Pink Floyd - 1975 - Wish You Were Here - Wish You Were Here(318).

    Durata totale della playlist (secondi): 974

### TO-DO: ###
- Correggere errore sulla richiesta:
     
       "Di quale album vuoi conoscere quali canzoni sono presenti nella tua playlist? :"

- Correggere errore sulla creazione del file: 

		playlist.txt
