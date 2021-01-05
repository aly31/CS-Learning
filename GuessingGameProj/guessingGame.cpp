#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	// Your program will create a random number from 1 to 100 (including 1 and 100).
	// You will ask the user to guess this random number. 
	// If the user guesses the wrong number,
	//		You should print out, "Your answer was too big/too small! Try again!"
	// When they get the correct answer,
	// Print out "You guessed correctly! It only took you (the number of tries it took them) tries!"


	// How to generate a random number:
	// rand() is a function that generates a random integer from 0 to RANDMAX
	// 		RANDMAX is a variable defined in <stdlib.h> (from line 1). 
	//		RANDMAX is computer dependent but is guaranteed to be at least 32767.

	// If I want to get a random number n in the range x <= n < y
	//		int n = (rand() % (y-x)) + x

	// GOOD LUCK!

// rand () % 100;
cout << "This is a guessing game. Please guess a number" << "." << endl;
int x;
cin >> x;
int random = (rand () % (101 -1)) + 1;
int tries = 0;

bool isCorrect;
while (x != random)
{
	tries = tries + 1;
	isCorrect = false;
	if (x > random)
	{
		cout << "Your guess is too big!" << endl;
	}
	else
	{
		cout << "Your guess is too small!" << endl;
	}
	cout << "Guess again!" << endl; 
}
if (x == random)
{
	isCorrect = true; 
	cout << "It only took you" << tries << "tries!" << endl;
}




}