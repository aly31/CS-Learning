#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{

	// If statements short exercise
	// Nested if statements and if-else-if blocks

	// What if we wanted to create a cascading conditions statement
	// We will ask for the user to type in an integer

	// If the number is a multiple of 3, we print out "fizz"
	// If the number is a multiple of 5, we print out "buzz"
	// If the number is a multiple of 15, we print out "fizzbuzz"
	// Otherwise, print out "N/A"

	cout << "enter a positive integer" << endl;
	int x;
	cin >> x;

	if (x % 15 == 0)
	{
		cout<<"fizzbuzz"<<endl;
	}
	else
	{
		if (x % 3 == 0)
		{
			cout<<"fizz"<<endl;
		}
		else
		{
			if (x % 5 == 0)
			{
				cout<<"buzz"<<endl;
			}
			else
			{
				if ( (x % 3 != 0) && (x % 5 != 0) && (x % 15 != 0) ) 
				{	
					cout<<"N/A"<<endl;
				}
			}		
		}	

	}
}
