#include <iostream>
#include <cmath>
int main(){
    using namespace std;
    double a,b,c;
    cout << "Enter A leg : ";
    cin >> a;
    cout << "Enter B leg : ";
    cin >> b;
    c = sqrt(pow(a,2) + pow(b,2));
    cout << "C leg = " << c;
    return 0;
}