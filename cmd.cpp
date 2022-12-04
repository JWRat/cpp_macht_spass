#include <iostream>

using namespace std;

/*
*  Das Programm kann mit Parametern aufgerufen werden:
*   z.B. cmd Mein Name ist Hase. 
*   Unter Windows: cmd.exe Mein Name ist Hase
*  Diese Paramter werden dann jeweils pro Zeile ausgegeben.
*  Dazu wird eine Schleife (for...) gebildet, die mit einer Laufvariablen (i) von 0
*  bis zur Anzahl der Parameter läuft. Dabei zählt man stets von 0 bis Anzahl - 1. 
*/
int main(int argc, char **args) {

    for (int i=0; i<argc; i++) {
        cout << "Parameter Nummer " << i << " ist " << args[i] << endl;
    }
    
    return 0;
}