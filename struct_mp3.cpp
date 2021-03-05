/*
	[struct_mp3] Definire una struct Mp3 che contenga le informazioni base di una traccia musicale (titolo, album, artista, anno, durata). Definire poi
	un array playlist che contenga n tracce Mp3. Creare infine le seguenti functions:*/
	
	// void stampa_traccia(Mp3 track);  stampa i dati della traccia 
	
	// void stampa_album(Mp3[] playlist, int n, char album[]);  stampa le tracce dell'album con il
	// nome indicato 
	
	// int durata_playlist(Mp3 playlist[], int n);  restituisce la durata totale in secondi della
	// playlist 
	
	// Creare un main() che carichi l'array e utilizzi le functions precedenti. Si ricorda che con la function strcmp(str1, str2) è possibile
	// confrontare due stringhe (se il valore restituito é 0 allora str1 è uguale a str2).

#include <iostream>
#include <string.h>
#include <math.h>
#include <fstream>

using namespace std;

const int NMAX = 100;

struct Mp3 {
	char titolo [64];
	char album [64];
	char artista [64];
	int anno;
	int durata;
};

int stampa_traccia (Mp3 track) {
	cout << track.artista << " - " << track.anno << " - "	<< track.album << " - " << track.titolo << "(" << track.durata << ")." << endl;
}

void stampa_album(Mp3 playlist[], int n, char album[64]) {
	for (int i = 0; i < n; i++) {
		if (strcmp(playlist[i].album, album) == 0) {
			stampa_traccia(playlist[i]);
		}
	}
}

// restituisco la durata della playlist in secondi
int durata_playlist(Mp3 playlist[], int n) {
	int tot = 0;
	for (int i = 0; i < n; i++) {
		tot = tot + playlist[i].durata;
	}
	return tot;
}

Mp3 new_mp3 () {
	Mp3 m;
	cin.ignore();
	cout << "Titolo: ";
	cin.getline(m.titolo, NMAX); 
	cout << "Album: ";
	cin.getline(m.album, NMAX); 
	cout << "Artista: ";
	cin.getline(m.artista, NMAX);
	cout << "Anno: ";
	do {
		cin >> m.anno;
	} while (m.anno <= 0 || m.anno >= 2030);
	cout << "Durata (in secondi): ";
	cin >> m.durata;
	return m;
}

int main () {
	Mp3 playlist[NMAX];
	int n;
	char nome_album[NMAX];
	
	cout << "Numero canzoni playlist: ";
	do {
		cin >> n;
	} while (n <= 0 || n >= NMAX);
	cout << endl;
	for (int i = 0; i < n; i++) {
		playlist[i] = new_mp3();
		cout << endl;
	}
	cout << endl << "LA TUA PLAYLIST: " << endl << endl;
/*	ofstream SaveFile("playlist.txt");*/
	for (int i = 0; i < n; i++) {
		/*SaveFile << */cout << "TRACCIA n. " << i+1<< ": ";
		/*SaveFile << */stampa_traccia(playlist[i]);
		cout << endl;
		/*SaveFile << endl;*/
	}
/*	SaveFile.close();*/
	cout << "Durata totale della playlist (secondi): " << durata_playlist(playlist, n) << endl << endl;
	
	cout << "Di quale album vuoi conoscere quali canzoni sono presenti nella tua playlist? : ";
	cin.getline(nome_album, NMAX);
	
	stampa_album(playlist, n, nome_album);
	cout << endl << endl;
	
	system("PAUSE");
}
