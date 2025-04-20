#include <iostream>
// Opteratoren

// Aufgabe 1: Lasse den Benutzer zwei Ganzzahlen und zwei Gleitkommazahlen eingeben
int main() {
    int gzahl1;
    int gzahl2;
    double glzahl1;
    double glzahl2;

    std::cout << "Gebe zwei Ganzzahlen und zwei Gleitzahlen ein:\n";
    std::cin >> gzahl1;
    std::cin >> gzahl2;
    std::cin >> glzahl1; 
    std::cin >> glzahl2; 

    // Aufgabe 2: Alle arithmetischen Grundoperationen (+, -, *, /, %)
    std::cout << "------------" << std::endl << std::endl;
    std::cout << gzahl1 + gzahl2 << std::endl;
    std::cout << gzahl1 - gzahl2 << std::endl;
    std::cout << gzahl1 * gzahl2 << std::endl;
    std::cout << gzahl1 / gzahl2 << std::endl;
    std::cout << gzahl1 % gzahl2 << std::endl << std::endl;

    std::cout << "------------" << std::endl << std::endl;
    

    return 0;
}