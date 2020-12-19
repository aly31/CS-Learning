#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	// If statement fun!

	// (x < 4) || (y>5)
	// (x >=2 ) && (y < 0)
	// ((x != 3) && !(y >= 5))

	int x = 5;
	int y = 6;
	cout << "For the following examples, x = 5 and y = 6" << endl;
	cout << "Example 1:" << endl;
	cout << "Evaluating (x < 4) || (y>5)" << endl;
	bool example1Result = ((x < 4) || (y>5));
	cout << "The condition above is " << example1Result << endl;
	cout << endl;
	cout << "Example 2:" << endl;
	cout << "Evaluating (x >=2 ) && (y < 0)" << endl;
	cout << "The condition above is ";
	if ((x >=2 ) && (y < 0))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	cout << "Example 3:" << endl;
	cout << "Evaluating ((x != 3) && !(y >= 5))" << endl;
	if (((x != 3) && !(y >= 5)))
	{
		cout << "The condition above is true" << endl;
	}
	else
	{
		cout << "The condition above is false" << endl;
	}

}