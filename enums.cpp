#include <iostream>
using namespace std;
enum Cups {Afcon, WC23};

int main()
{
    Cups cup = Afcon;
    switch(cup)
    {
        case Afcon :
         cout << "Senegal";
          break;

          case WC23:
          cout << "Argentina";
          break;

    }
    return 0;
}