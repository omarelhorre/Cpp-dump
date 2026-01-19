#include <iostream>
#include <ctime>
using namespace std;
int scoreHuman = 0;
int scoreComputer = 0;
 int HowManyRounds();
 char getUserChoice();
 void showChoice(char choice);
 char generateCompuetersChoice();
 void chooseWinnerPerRound(char computer, char user);
 void chooseWinner(int scoreHuman, int scoreComputer);

 int main()
 {
    int rounds = HowManyRounds();
    for (int i = 0 ; i<rounds ; i++){
    char userInput = getUserChoice();
    cout << "Your choice: ";
    showChoice(userInput);
    char computer = generateCompuetersChoice();
    cout << "The computers choice: ";
    showChoice(computer);
    char computersChoice = generateCompuetersChoice();
    chooseWinnerPerRound(computersChoice,userInput);
}
    chooseWinner(scoreHuman,scoreComputer);
    return 0;
 }
int HowManyRounds()
{
    int rounds;
    do{
    cout << "How many rounds you want to play?";
    cin >> rounds;
}while(rounds >= 5);
return rounds;   
}
  char getUserChoice()
  {
    char userInput;
    cout << "Rock | Paper | Scissors | GAME \n";
    do{
        cout << "r -> Rock\n";
        cout << "s -> Scissors\n";
        cout << "p -> Paper\n";
        cout << "Please make a choice : \n";
        cin >> userInput;
    } while(userInput != 'r' && userInput != 's' && userInput != 'p');
    return userInput;
  }
  void showChoice(char choice)
  {
    switch(choice)
    {
        case 'r' :
        cout << "rock\n";
        break;
        case 'p' :
        cout << "paper\n";
        break;
        case 's' :
        cout << "scissors\n";
        break;
    }
  }
  char generateCompuetersChoice()
  {
    srand(time(NULL));
    int computersChoice = (rand() % 3) +1;
    switch(computersChoice)
    {
        case 1 : 
        return 'r';
        case 2:
        return 's';
        case 3:
        return 'p';
    }

  }
   void chooseWinnerPerRound(char computer, char user)
   {
    switch (user)
    {
        case 'r':
        if (computer == 's'){
            cout << "You win!\n";
            scoreHuman++;
        }
        else if (computer == 'p') 
        {
            cout << "Computer wins!\n";
            scoreComputer++;
        }
        else 
        {
            cout << "Draw! Both parts take 1 point\n";
            scoreComputer++;
            scoreComputer++;
        }
        break;
    
    case 'p':
    if (computer == 's'){
            cout << "Computer wins!\n";
            scoreComputer++;
        }
        else if (computer == 'r') 
        {
            cout << "You win!\n";
            scoreHuman++;
        }
        else 
        {
            cout << "Draw! Both parts take 1 point\n";
            scoreComputer++;
            scoreComputer++;
        }
    break;
    case 's':
    if (computer == 'r'){
            cout << "Computer wins!\n";
            scoreComputer++;
        }
        else if (computer == 'p') 
        {
            cout << "You win!\n";
            scoreHuman++;
        }
        else 
        {
            cout << "Draw! Both parts take 1 point\n";
            scoreComputer++;
            scoreComputer++;
        }
    break;
    }
   }
   void chooseWinner(int scoreHuman, int scoreComputer)
   {
    if(scoreHuman > scoreComputer) cout << "Congrats, You win! ";
    else if (scoreHuman < scoreComputer) cout << "Congrats, You win! ";
    else cout << "Draw!";

   }