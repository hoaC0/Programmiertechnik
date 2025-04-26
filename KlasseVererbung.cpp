#include <iostream>
using namespace std;


/* Erstelle eine Klasse Fahrzeug mit den Attributen:

marke (z. B. "BMW")

baujahr (z. B. 2015)

Füge eine Methode beschreiben() hinzu, die Marke und Baujahr ausgibt. */
class Fahrzeug { // Fahrzeug("BMW", 1995 );
    private:
    protected:
        string Marke;
        int Baujahr;

    public:
        Fahrzeug(string m, int bj){
            Marke = m;
            Baujahr = bj;
            cout << "Marke: " << Marke << "\n";
            cout << "Baujahr: " << Baujahr << "\n";
        };

        void beschreiben(string m, int bj) {
            Marke = m;
            Baujahr = bj;
            cout << "Marke: " << Marke << "\n";
            cout << "Baujahr: " << Baujahr << "\n";
        }

};


/* Erstelle eine Klasse Auto, die von Fahrzeug erbt, und:

zusätzlich das Attribut anzahl_tueren bekommt

die Methode beschreiben() überschreibt, um alle 3 Infos auszugeben */
class Auto:public Fahrzeug { //Auto("BMW", 1995, 4);
    private:
        int anzahl_tueren;
    public:
    Auto(string m, int bj, int at):Fahrzeug(m, bj) {
        anzahl_tueren = at;
        cout << "Anzahl der Tueren: " << anzahl_tueren << "\n";
    };
};


/* Erweitere Auto, sodass:

marke, baujahr und anzahl_tueren im Konstruktor übergeben werden

der Konstruktor von Fahrzeug korrekt mit super() aufgerufen wird */

void super() { // super();
    Auto("BMW", 1995, 4);
}


class Motorrad:public Fahrzeug {
    private:
    public:
        Motorrad(string m, int bj):Fahrzeug(m,bj) {

        }

        void beschreiben(string m, int bj) {
            Fahrzeug::beschreiben(m,bj);
        };
};




int main() {
    Motorrad YYY("BMW", 2015);
    YYY.beschreiben("Honda", 2022);
    return 0;
}