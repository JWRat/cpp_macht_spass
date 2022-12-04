#include <iostream>

using namespace std;

/*
*  Hier werden viel Variable vom Typ float (wird für reale Zahlen benutz) angelegt 
*  mit const float wird eine Konstante bestimmt, die sich im Laufe es Programms nicht ändern kann.
*  Die restlichen Variable werden eingelesen (cin >>) und zuvor wird ein Text angezeigt, so dass der
*  Nutzer weiß, was er eingeben soll
*/
int main(int argc, char **args) {

    // Verbrauch in Ltr / 100km
    const float Verbrauch = 7.0;

    float getankteMenge;
    cout << "Kraftstoffmenge in Ltr: "; cin >> getankteMenge;

    
    float naheTankstelleEntfernung, naheTankstellePreis;

    cout << "nahegelegene Tankstelle" << endl;
    cout << "  Entfernung:           "; cin >> naheTankstelleEntfernung;
    cout << "  Preis:                "; cin >> naheTankstellePreis;

    
    float ferneTankstelleEntfernung, ferneTankstellePreis;

    cout << "ferngelegene Tankstelle" << endl;
    cout << "  Entfernung:           "; cin >> ferneTankstelleEntfernung;
    cout << "  Preis:                "; cin >> ferneTankstellePreis;

    float naheTankstelleKosten = Verbrauch / 100.0 * naheTankstelleEntfernung * naheTankstellePreis;

    float ferneTankstelleKosten = Verbrauch / 100.0 * ferneTankstelleEntfernung * ferneTankstellePreis;

    cout << "Mehrkosten für Fahrt zur fernen Tankstelle: " << ferneTankstelleKosten - naheTankstelleKosten << endl;

    cout << "Ersparnis durch getankte Menge:             " << getankteMenge * (naheTankstellePreis - ferneTankstellePreis) << endl;

    cout << "Gesamte Ersparnis:                          " << getankteMenge * (naheTankstellePreis - ferneTankstellePreis) - (ferneTankstelleKosten - naheTankstelleKosten) << endl;

    return 0;
}