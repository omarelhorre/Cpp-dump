#include <iostream>
using namespace std;
int main()
{
    string Questions[] = {"A. What software company is headquartered in Redmond, Washington?", "B. What is a word, phrase, number, or other sequence of characters that reads the same backward as forward?"};
    string Options[][4] = {{"A. Microsoft", "B. Sony", "C. NVIDIA", "D. AMD"},
                          {"A. Synonym", "B. Palindrome", "C. Acronym", "D. Inverted word"}};
    char answers[] = {'A','B'};
    char guess;
    int total = 0;
    int size = sizeof(Questions) / sizeof(Questions[0]);
    for (int i =0; i< size ; i++)
    {
        cout << Questions[i] << '\n';
        for(int j =0 ; j< sizeof(Options[i]) / sizeof(Options[i][0]) ; j++)
        {
            cout << Options[i][j] << '\n';
        }
        cout << "Enter your guess: ";
        cin >> guess;
        guess = toupper(guess);
        if(guess == answers[i])
        {
            cout << "correct!\n";
            total++;
        }
        else cout << "wrong\n" << "Correct Answer : " << answers[i]<< '\n';
    }
    cout << "Total:" << total << "/2\n" << "Score: " << ( total/(double) size )  * 100 << '%' ;
    return 0;
}