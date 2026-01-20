#include <iostream>
#include <ctime>
using namespace std;
void traceBoard(char* space)
{
    cout << "     |     |     " <<'\n';
    cout << "  "<<space[0]<< "  |  "<<space[1]<< "  |  "<<space[2]<< "  "<<'\n';
    cout << "     |     |     "<<'\n';
    cout << "-----|-----|-----"<<'\n';
    cout << "     |     |     "<<'\n';
    cout << "  "<<space[3]<< "  |  "<<space[4]<< "  |  "<<space[5]<< "  "<<'\n';
    cout << "     |     |     "<<'\n';
    cout << "-----|-----|-----"<<'\n';
    cout << "     |     |     "<<'\n';
    cout << "  "<<space[6]<< "  |  "<<space[7]<< "  |  "<<space[8]<< "  "<<'\n';
    cout << "     |     |     "<<'\n';
    cout << "-----|-----|-----"<<'\n';
}
void playerTurn(char* space,char symbol)
{
    int choice;
    do
    {
        cout << "Choose where you want to fill (1-9)";
        cin >> choice;
        choice--;
    } while( (choice > 8 || choice < 0) || space[choice] != ' ');
    space[choice] = symbol;
}
void computerTurn(char* space,char symbol)
{
    int random;
do{
    random = (rand() % 9);
    if(space[random] == ' ')
    {
        space[random] = symbol;
        return;
    }
}while(true);
}
bool checkWinner(char player, char computer, char* space)
{
    if(space[0] != ' ' && space[0] == space[1] && space[0] == space[2])
    {
        if(space[0] == player) cout<< "You win!";
        else cout<< "Computer wins!";
        return true;
    }
    else if(space[3] != ' ' && space[3] == space[4] && space[3] == space[5])
    {
        if(space[3] == player) cout<< "You win!";
        else cout<< "Computer wins!";
        return true;
    }
    else if(space[6] != ' ' && space[6] == space[7] && space[6] == space[8])
    {
        if(space[6] == player) cout<< "You win!";
        else cout << "Computer wins!";
        return true;
    }
    
    else if(space[0] != ' ' && space[0] == space[3] && space[3] == space[6])
    {
        if(space[0] == player) cout<< "You win!";
        else cout << "Computer wins!";
        return true;
    }

    else if(space[1] != ' ' && space[1] == space[4] && space[4] == space[7])
    {
        if(space[1] == player) cout<< "You win!";
        else cout << "Computer wins!";
        return true;
    }

    else if(space[2] != ' ' && space[2] == space[5] && space[5] == space[8])
    {
        if(space[2] == player) cout<< "You win!";
        else cout << "Computer wins!";
        return true;
    }

    else if(space[0] != ' ' && space[0] == space[4] && space[0] == space[8])
    {
        if(space[0] == player) cout<< "You win!";
        else cout << "Computer wins!";
        return true;
    }
    else if(space[2] != ' ' && space[2] == space[4] && space[4] == space[6])
    {
        if(space[2] == player) cout<< "You win!";
        else cout << "Computer wins!";
        return true;
    }

    return false;


}
bool checkTie(char* space)
{
    for(int i = 0 ; i< 9 ; i++)
    {
        if(space[i] == ' ')
        return false;
    }
    cout<< "its a tie!";
    return true;
}
int main()
{
    srand(time(NULL));
    char space[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    traceBoard(space);
    do{
    cout<< "****************************\n";
    playerTurn(space, 'X');
    traceBoard(space);
    if(checkWinner('X','O',space)) break;
    if(checkTie(space)) break;
    cout<< "****************************\n";
    computerTurn(space, 'O');
    traceBoard(space);
    if(checkWinner('X','O',space)) break;
    if(checkTie(space)) break;
    }while(true);
    cout<< "thanks for playing";
}