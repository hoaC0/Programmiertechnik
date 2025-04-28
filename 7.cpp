#include <iostream>
#include <windows.h>
using namespace std;
// Zeiger


/*

a) Definieren Sie dynamisch 10 Gleitkommazahlen und füllen Sie durch Eingabe über 
die Tastatur. Geben Sie diese Zahlen wieder aus. 

b) Nutzen Sie sie Bsp. a) und erweitern sie dies mittels Funktionen (d.h. Eingabe, 
Ausgabe, Definition Anzahl der Gleitkommazahlen) 

c) Erweitern Sie Bsp. b) mittels Sortierung. Nutzen Sie das Prinzip von Zeigern. 

*/

void a() {
    // a)
    double* zahlen = new double[10];
    int count = 10;

    cout << "Geben Sie 10 Gleitzahlen ein:\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> zahlen[i];
        count--;
        if( i != 9 ) {
        cout << "Geben Sie " << count << " weitere Gleitzahlen ein:\n";
        }
    }

    for ( int j = 0; j < 10; j++)
    {
        cout << zahlen[j] << endl;
        Sleep(500);
    }
    
    delete[] zahlen;

}

void eingabe() {

}

void b() {
    int anzahl;
    int count = 0;

    cout << "Wie viele Gleit­zahlen wollen Sie definieren?\n";
    cin >> anzahl;

    double* zahlen = new double[anzahl];
    double* zahlen2 = new double[anzahl];

    cout << "Geben Sie Ihre " << anzahl << " Zahlen ein:\n";

    for (int i = 0; i < anzahl; i++) {
        cout << "\nZahl " << (i + 1) << ": ";
        cin >> zahlen[i];
    }

    for (int j = 0; j < anzahl; j++) {
        for (int k = 0; k < anzahl; k++) {
            if (zahlen[j] > zahlen[k]) {
                zahlen2[count] = zahlen[j];
                count++;
                break;
            }
        }
    }

    cout << "-----------------\n";

    for (int l = 0; l < count ; l++) {
        cout << zahlen2[l] << endl;
    }

    delete[] zahlen;
    delete[] zahlen2;
}

int main() {
    
    string food = "Pizza\n";
    string* pointer = &food;

    cout << food << endl;
    cout << pointer << endl << endl;

    *pointer = "Burger";
    cout << *pointer;
    return 0;
}