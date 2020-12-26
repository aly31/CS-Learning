#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{

	// Code to convert x to binary representation
	
	cout << "Enter a number" << endl;

	int x;
	cin >> x;
	int num = x;

	cout << "Enter the base you want to convert to" << endl;

	int base;
	cin >> base;

	string binRepresentation = "";
	string binRev = "";
	while (num > 0)
	{
		int bit = num % base;
		binRev += to_string(bit);
		num = num / base;
	}
	size_t len = binRev.length();
	for (int i = len-1; i >= 0; i--) 
	{
		binRepresentation += binRev[i];
	}
	cout << "The decimal number " << x << " is " << binRepresentation << " in base " << base << endl;

}