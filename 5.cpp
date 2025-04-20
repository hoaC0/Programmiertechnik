#include <iostream>
// Funktionen

/* Bilden Sie eine Summe in einer Funktion durch Addieren von 10 Zahlen und geben 
Sie diese in der Funktion noch aus */
int a(int a,int b, int c, int d, int e, int f, int g, int h, int i, int j){
    return a + b + c + d + e + f + g + h + i + j;
}

/* Bilden Sie eine Summe in einer Funktion durch Addieren von 10 Zahlen und geben 
Sie diese in der Main.cpp aus */
void b(int a,int b, int c, int d, int e, int f, int g, int h, int i, int j){
    std::cout << a + b + c + d + e + f + g + h + i + j;
}

/* Bilden Sie eine Mehrfachselektion in der Funktion ab (siehe dazu Bsp bei 
Mehrfachselektion) */
void c(int a,int b, int c, int d, int e, int f, int g, int h, int i, int j){
    int choice;
    std::cout << "Enter a number:\n1 addition\n2 substraction\n3 multiplication\n4 division\n\n";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << a + b + c + d + e + f + g + h + i + j;
        break;
    case 2:
        std::cout << a - b - c - d - e - f - g - h - i - j;
        break;
    case 3:
        std::cout << a * b * c * d * e * f * g * h * i * j;
        break;
    case 4: 
        std::cout << a / b / c / d / e / f / g / h / i / j;
        break;
    default:
        std::cout << "NOT VALID!!" << std::endl;
        break;
    }
}


int main(){
    c(1,2,3,4,5,6,7,8,9,10);
    return 0;
}