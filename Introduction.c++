#include <iostream>
using string_t = std::string;
/* namespace og{
    int age = 20;
}
    */
int main(){

/* int x = 18;
    std::string name = "omar ";
    std::cout << "My name is " << name << "My age is " << x;
    */ 


    /*
    using namespace og;
    
   string_t name = "Omar";
   std::cout << "My name is " << name << " and I am " << age << std::endl;
*/
string_t name;
std::cout << "What is your name? ";
std::getline(std::cin, name);
std::cout << "Hello " << name;
    return 0;
}