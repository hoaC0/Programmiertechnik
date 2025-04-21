#include <iostream>
using namespace std;


void a() {  

    /*Schreiben Sie ein C++ Programm, das 5 Ganzzahlen über eine kopfgesteuerte Schleife 
    einließen und danach wieder über eine fuß gesteuerte Schleife ausgibt. Nutzen sie 
    eines eindimensionalen Arrays.*/
    
    int zahlen[5] = {1,2,3,4,5};
    int i = 0;
    do
    {   
        cout << zahlen[i];
        i++;
    } while ( i != 5 );

    i = 0;

    while (i != 5 )
    {
        cout << zahlen[i];
        i++;
    }
}

void b() {

    /* Erweitern Sie ihr Programm, in dem sie beide Routinen als Funktion ausgliedern und 
    das Array übergeben */

    int zahlen[5] = {1,2,3,4,5};
    int i = 0;
    do
    {   
        cout << zahlen[i];
        i++;
    } while ( i != 5 );

    i = 0;

    while (i != 5 )
    {
        cout << zahlen[i];
        i++;
    }
}

void c() {
    /* Schreiben Sie ein C++ Programm, das ein 8x8 Schachbrett abbildet. Dabei soll über 
    der ersten Zeile die Buchstaben A – H erscheinen und vor jeder Zeile die Zeilen 
    Nummer 1-8. A1 ist immer schwarz. Programmieren Sie eine Funktion, die ihn das die 
    Farbe ausgibt, wenn Sie das Feld (z.B. A1) eingeben. z.B. Eingabe: A1: schwarz */

    string Schachbrett[9][9] = {
        { " ",  "A","B","C","D","E","F","G","H" }, // A - H
        //1-8,
        { "1",  "W","S","W","S","W","S","W","S" },
        { "2",  "S","W","S","W","S","W","S","W" },
        { "3",  "W","S","W","S","W","S","W","S" },
        { "4",  "S","W","S","W","S","W","S","W" },
        { "5",  "W","S","W","S","W","S","W","S" },
        { "6",  "S","W","S","W","S","W","S","W" },
        { "7",  "W","S","W","S","W","S","W","S" },
        { "8",  "S","W","S","W","S","W","S","W" },
    };

    string eingabe1temp;
    int eingabe1;
    int eingabe2;

    std::cout << "Geben Sie ein (Schach-)Feld ein:\n";
    std::cin >> eingabe1temp;
    if (eingabe1temp == "A")
    {
        eingabe1 = 1;
    }
    else if (eingabe1temp == "B")
    {
        eingabe1 = 2;
    }
    else if (eingabe1temp == "C")
    {
        eingabe1 = 3;
    }
    else if (eingabe1temp == "D")
    {
        eingabe1 = 4;
    }
    else if (eingabe1temp == "E")
    {
        eingabe1 = 5;
    }
    else if (eingabe1temp == "F")
    {
        eingabe1 = 6;
    }
    else if (eingabe1temp == "G")
    {
        eingabe1 = 7;
    }
    else if (eingabe1temp == "H")
    {
        eingabe1 = 8;
    }
    else
    {
        cout << "invalid!";
    }
    
    
    std::cin >> eingabe2;
    string wert = Schachbrett[eingabe1][eingabe2];
    if (wert == "S")
    {
        cout << "Das Feld ist SCHWARZ!!!\n";
    }
    else if (wert == "W")
    {
        cout << "Das Feld ist WEISS!!!\n";
    }
    else
    {
        cout << "not valid";
    }

    cout << "rt" << eingabe1 << "\ndw" << eingabe2;
}
    
int main(int argc, char const *argv[])
{
    c();
    return 0;
}
