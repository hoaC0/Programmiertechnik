#include <iostream>
using namespace std;
// Klassen

// a) Bilden Sie eine Klasse Schueler bestehend aus name, vorname, geburtstag
class Schueler {
    private:
        string vorname;
        string name;
        string geburtstag;

    // b) Bilden Sie einen Konstruktor und einen Parameterkonstruktor 
    public:
        Schueler() {
            // cout << "Konstruktor erstellt!\n";
        }

        Schueler(string v, string n, string g) {
            vorname = v;
            name = n;
            geburtstag = g;

            cout << "\n\nVorname:" << vorname;
            cout << "\nName:" << name;
            cout << "\nGeburtstag:" << geburtstag;
        };
        

        // c) Bilden Sie einen Destruktor
        ~Schueler() {
            // cout << "\nObjekt zerstoert!\n";
            DEL();
        };


        // e) Bilden Sie die entsprechenden Set-/Get Methoden
        void set(string v, string n, string g) {
            vorname = v;
            name = n;
            geburtstag = g;
        }

        string getV() {
            return vorname;
        }

        string getN() {
            return name;
        }

        string getG() {
            return geburtstag;
        }

        // f) Zeigen Sie ein Beispiel mit dynamische Speicherreservierung und Klasse
        int anzahl = 1;
        int* DS = new int[anzahl];

        void INSERT() {
            cout << "Array Groesse aendern: ";
            cin >> anzahl;
        }

        void DEL() {
            delete[] DS;
        }
        

};

int main() {

    /*
    
    Schreiben Sie ein C++ Programm das 2 Objekte Person generiert: 
    1. Person (Name1, Vorname1, xx.xx.xxxx) 
    2. Person (Name2, Vorname2, xx.xx.xx) 
    geben Sie beide Objekte wieder aus. 
    
    */

    Schueler schueler1("Hoa","Chau", "10.10.2005");

    Schueler schueler2("Max","Mustermann", "10.10.05");



    return 0;
}