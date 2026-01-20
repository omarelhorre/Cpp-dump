#include <iostream>
using namespace std;
class Human{
    public:
    int age;
    string name;

    void eat(string name)
    {
        cout << name << "is eating";
    }
    void sleep(string name)
    {
        cout << name << "is sleeping";
    }
};


int main()
{
    Human omar;

    omar.eat("omar ");

}