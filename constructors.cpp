#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    //constructor
    Person(string name, int age)
    {
        this->name = name;
        this ->age = age;
    }
};

class Car{
    public:
    string make;
    string model;
    int year;
    string color;

    Car(string make, string model, int year, string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

//overloaded constructors could be just like overloaded functions where we call different methods instead
int main()
{
    Person omar("omar",20);
    Car car1("Ford","mustang",2012,"Black");
    cout << omar.age << '\n';
    cout << car1.color;
    return 0;
}