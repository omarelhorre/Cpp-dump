#include <iostream>
int main(){
    using namespace std;
    double a,b;
    char op;
    cout << "Enter an operator: ";
    cin >> op;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    switch(op)
    {
        case '+':
        cout << a+b;
        break;
        case '-':
        cout << a-b;
        break;
        case '*':
        cout << a*b;
        break;
        case '/':
        cout << a/b;
        break;
        default:
        cout << "Invalid";

    }

    return 0;
}