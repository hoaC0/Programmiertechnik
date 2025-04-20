#include <iostream>
// Ein- und Ausgabe

// Schreibe ein C++-Programm, dass...

// Aufgabe 1: Vom Benutzer Namen, Alter und Körpergröße einliest
void Eingabe() {
    std::string name;
    int alter;
    double groesse;

    std::cout << "Gebe deinen Namen ein:\n";
    std::cin >> name;
    std::cout << "Gebe dein Alter ein:\n";
    std::cin >> alter;
    std::cout << "Gebe deine Groesse ein ( cm ):\n";
    std::cin >> groesse;

    // Aufgabe 2: Die eingegebenen Werte formatiert wieder ausgibt (mit verschiedenen Manipulatoren)

    std::cout << "Name:" << name << std::endl;
    std::cout << "Alter ( oktal ):" << std::oct << alter << std::endl;
    std::cout << "Groesse:" << std::hex << groesse << std::endl;
}


int main() {
    Eingabe();
    return 0;
}