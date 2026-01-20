#include <iostream>
using namespace std;
class Person{
    private:
    string name = "omar";
    int age;
    //constructor
    public:
    void nameGetter()
    {
        cout << name;
    }
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
    Person person("omar",18);
    person.nameGetter();
    
    return 0;
}