#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int randResult ( int low, int high )
{
    return rand() % ( high - low + 1 ) + low;
}

int main ()
{
srand( time ( NULL ));

int guess = 50;
int high = 100;
int low = 1;

int number = 100;
int numberOfGuesses = 0;
bool guessCorrectly;

while ( guessCorrectly == 0 )
{
    cout << "Computer guessing " << guess << endl;
    numberOfGuesses++;

    if ( guess == number )
    {cout << "Correct!  The number was " << number << endl;
        guessCorrectly = 1;
    }
    else if ( guess < number )
    {
        cout << "Too low!" << endl;
        low = guess;
        guess = (( guess + high ) / 2);
    }
    else
    {
        cout << "Too high!" << endl;
        high = guess;
        guess = (( guess + low ) / 2 );
    }
}

cout << "Total Number of Guesses: " << numberOfGuesses << endl;
cout << "The Number Was: " << number << endl;

}
