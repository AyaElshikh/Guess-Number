#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

int guess;
char choose;
void levelsOfgame();
void difficult();
void middle();
void easy();
int main()
{
    srand(time(0));
    levelsOfgame();
}

void levelsOfgame()
{
    cout <<       "\n  ****************** hello in the guess number game :) ****************** \n " << endl;
    cout << "* to choose the levels of game: \n " << endl;
    cout << "* Enter 'd' for difficult level - or 'm' for middle level - or 'e' for easy level : \n \n" << endl;
    cin >> choose;
    if (choose == 'd')
    {
        cout << "\n * you choose the difficult level : \n" << endl;
        cout << " * You have 3 attempts : \n" << endl;
        difficult();
    }
    else if (choose == 'm')
    {
        cout << "* you choose the middle level : \n" << endl;
        cout << "* you have 5 attempts : \n" << endl;
        middle();
    }
    else if (choose == 'e')
    {
        cout << "* you choose the easy level : \n" << endl;
        cout << "* you have 7 attempts : \n" << endl;
        easy();
    }
    else
    {
        cout << "* Error, Please try Again letter:(" << endl;
        levelsOfgame();
    }
}

void difficult()
{
    int g;
    int number = rand() % 100+1;
    for (int i = 1; i <= 3; i++)
    {
        cout << "please guess any number from 1 to 100: \n";
        cin >> g;
        if (g == number)
        {
            cout << "\n Congratulations! You won! \n" << endl;
            exit(0);
        }
        else if(g!=number&&g<number)
        {
            cout << "This is Number is less than the secret Number \n " << endl;
            cout << "Please try Again: \n " << endl;

        }
        else
        {
            cout << "This is Number is bigger than the secret Number \n " << endl;
            cout << "Please try Again: \n " << endl;
        }
    }
    cout << "\n The random number is (" << number << ")" << endl;
    cout << "sorry you lost \n" << endl;
    exit(0); // Exit the program if user loses
}

void middle()
{
    int g;
    int number = rand() % 50+1;
    for (int i = 1; i <= 5; i++)
    {
        cout << "please guess any number from 1 to 50 : \n";
        cin >> g;
        if (g == number)
        {
            cout << "\n Congratulations! You won! \n" << endl;
            exit(0);
        }
        else if(g!=number&&g<number)
        {
            cout << "This is Number is less than the secret Number \n " << endl;
            cout << "Please try Again: \n " << endl;

        }
        else
        {
            cout << "This is Number is bigger than the secret Number \n " << endl;
            cout << "Please try Again: \n " << endl;
        }
    }
    cout << "\n The random number is (" << number << ")" << endl;
    cout << "sorry you lost \n" << endl;
    exit(0);
}

void easy()
{
    int g;
    int number = rand() % 15+1;
    for (int i = 0; i <= 7; i++)
    {
        cout << "please guess any number from 0  to 10: \n";
        cin >> g;
        if (g == number)
        {
            cout << "\n Congratulations! You won! \n" << endl;
            exit(0);
        }
        else if(g!=number&&g<number)
        {
            cout << "This is Number is less than the secret Number \n " << endl;
            cout << "Please try Again: \n " << endl;

        }
        else
        {
            cout << "This is Number is bigger than the secret Number \n " << endl;
            cout << "Please try Again: \n " << endl;
        }
    }
    cout << "\n The random number is (" << number << ")" << endl;
    cout << "sorry you lost \n" << endl;
    exit(0);
}
