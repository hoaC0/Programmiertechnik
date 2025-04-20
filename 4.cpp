#include <iostream>
// Selektion & Iteration

void compare() {

int x;
int y;

  std::cout << "Gebe eine Zahl ein" << std::endl;
  std::cin >> x;  
  std::cout << "Gebe die zweite Zahl ein" << std::endl;
  std::cin >> y;

    

  if (x % 2 == 0)
  {
    std::cout << "Die Variable X ist gerade!" << std::endl;
  } else {
    std::cout << "Die Variable X ist ungerade!" << std::endl;
  }
  
  if (y % 2 == 0)
  {
    std::cout << "Die Variable Y ist gerade!" << std::endl;
  } else {
    std::cout << "Die Variable Y ist ungerade!" << std::endl;
  }
};

void compare1() {
    int x;
    int y;

    std::cout << "Gebe eine Zahl ein ( x )" << std::endl;
    std::cin >> x;  
    std::cout << "Gebe die zweite Zahl ein ( y )" << std::endl;
    std::cin >> y;

    if ( x > y)
    {
        std::cout << "X is bigger";
    }
    else if (y > x)
    {
        std::cout << "Y is bigger";
    }
    else
    {
        std::cout << "HMMM";
    }
    
}

void mehrfachselektion() {
  int x;
  std::cout << "Geben Sie eine Zahl zwischen 1-5 ein" << std::endl;
  std::cin >> x;
  switch (x)
  {
  case 1:
    std::cout << x << std::endl;
    break;
  case 2:
    std::cout << x << std::endl;
    break;
  case 3:
    std::cout << x << std::endl;
    break;
  case 4:
    std::cout << x << std::endl;
    break;
  case 5:
    std::cout << x << std::endl;
    break;
  
  default:
    std::cout << "Nicht valide";
    break;
  }
}
int main() {
    mehrfachselektion();

    return 0;
} 