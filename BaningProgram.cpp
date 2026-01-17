#include <iostream>
#include <iomanip>
using namespace std;
void showBalance(double balance)
{
    cout << "Your balance is : $" << fixed << setprecision(2) << balance << '\n';
}
double deposit()
{
    double amount;
    cout << "Enter the amount of money to be deposited : ";
    cin >> amount;
    if (amount < 0) 
    {
        cout << "invalid amount" << '\n';
         return 0;
        }
    else return amount;

}

double withdraw(double balance)
{
    double amount;
    cout << "Enter the amount of money to be withdrawn : ";
    cin >> amount;
    if(balance >= amount) return amount;
    else {cout << "Invalid amount " << '\n';
         return 0;
    }
}
int main()
{
    int choice;
    double balance = 0;
    do{
        cout << "1. Show Balance"<< '\n';
        cout << "2. Deposit Money"<< '\n';
        cout << "3. Withdraw Money"<< '\n';
        cout << "4. Exit"<< '\n';

        cin >> choice;
        cin.clear();
        fflush(stdin);

        switch(choice)
        {
            case 1:
            showBalance(balance);
            break;
            case 2:
            balance += deposit();
            break;
            case 3:
            balance -= withdraw(balance);
            break;
            case 4:
            cout << "Thank you for visiting,looking forward to see you next time!";
            break;
            default : 
            cout << "Invalid choice";
            break;
        }
    }while(choice != 4);
    return 0;
}