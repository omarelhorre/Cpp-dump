#include <iostream>
using string_t = std::string;
int main(){
    using namespace std;
    string_t name;
    cout << "What is your name?";
    getline(cin,name);
    if(name.empty() == 1 ) {
    cout << "Empty name";
    return 0;
}
    cout << "The length of your name is " << name.length() << '\n';
    cout << "Your email is " << name.append("@etu.uae.ac.ma") << '\n';
    cout << "The first character of your string is " << name.at(0) << '\n';
    cout << "the letter a is added to the beginning of ur name " << name.insert(0,"a") << '\n';
    cout << "the position of the first ' ' is : " << name.find( " " ) << '\n';
    name.clear();
    cout << "Name cleared the variable name has -> " << name;
    return 0;
}