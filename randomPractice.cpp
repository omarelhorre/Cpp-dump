#include <iostream>
#include <ctime>
int main()
{
    using namespace std;
    srand(time(NULL));

    int random = (rand() % 100) + 1 ;
    int guess;
    int tries = 0;
    cout << "You have to guess a number between 1-100\n";
    do{
        cout << "Enter your guess : ";
        cin >> guess;
        if(random < guess) cout << "Less\n" << "Your guess : " << guess << '\n';
        else if (random > guess) cout << "Bigger\n" << "Your guess : " << guess << '\n';
        tries++;
    }while(guess != random);
    cout << "Bingo! \n" << "Your guess : " << guess << '\n' << "Random : " << random << '\n' << "tries taken : " << tries;
    return 0;
}