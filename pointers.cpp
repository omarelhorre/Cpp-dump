#include <iostream>
using namespace std;
void swapUnd(string *x,string *y);
int main(){
    string x = "x";
    string y = "y";
    cout << x << '\n';
    cout << y << '\n';
    swapUnd(&x,&y);
    cout << x << '\n';
    cout << y;
    return 0;
}
void swapUnd(string *x,string *y)
{
    string tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}