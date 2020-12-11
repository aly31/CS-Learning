#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	
	// User Input
	// Ask user for 2 numbers

	// Print the sum of the 2 numbers



	// int x;
	// cin >> x;	// User Input for an integer





	cout << "Please enter 2 random numbers" << endl;
	int x;
	cin >> x;

	int y;

	cin >> y;




	int sum = x + y;
	cout << "The sum is " << sum << "." << endl;




	// Getline example to read a user input string

	string name;
	cout << "Please enter your name" << endl;
	getline(cin,name);
	cout << "Your name is " << name << endl;


}