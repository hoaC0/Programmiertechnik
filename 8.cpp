#include <iostream>
using namespace std;
// Strukturen

// Definieren Sie eine Struktur Auto ausfolgenden Eigenschaften: string name, int PS, int 
// km_h. Schreiben Sie eine C++ Programm und füllen Sie 2 Objekte mit „Audi, 204 PS 
// und 250 km_h. „VW“, 150 PS, 200 km_h und geben Sie diese wieder aus.
struct Auto {
    string name;
    int PS;
    double kmh;

    // Definieren Sie eine einfache Liste
    int liste[10];

    // Definieren Sie eine doppelte Liste
    int doppelteListe[2][5];
};

int main() {

    Auto Audi;
    Audi.name = "Audi R6 2025";
    Audi.PS = 204;
    Audi.kmh = 250;

    Auto VW;
    VW.name = " VWID3";
    VW.PS = 150;
    VW.kmh = 200;

    
    return 0;
}