#include <stdlib.h>		// Standard library functions for c++
#include <string>			// To be able to use strings
#include <iostream>		// For input and output (ie printing and user input)
using namespace std;
int main()
{
	cout << "Welcome to the Restaurant Tax and Tip Calculator. " << endl;
	cout << "We take your subtotal and add tax and tip to calculate the total money you will pay. " << endl;
	cout << "You will enter your subtotal and the percentage that you would like to tip below. Please enter them as prompted. " << endl;
	string name; 
	cout <<"Please enter your name." << endl;
	getline (cin, name);
	double subtotal;
	cout <<"Please enter your subtotal of everything you ordered now. " << endl;
	cin >> subtotal;
	double  tippercentage;
	cout <<"Please enter the percentage you would like to tip. " << endl;
	cin >> tippercentage;
	double taxpercentage; 
	cout <<"Please enter the percentage that you are getting taxed. " << endl; 
	cin >> taxpercentage;
	cout <<"--- " << endl;
	double tax;
	double tip;
	double total;
	tax = subtotal * taxpercentage /100.0;
	tip = subtotal * tippercentage /100.0;
	total = subtotal + tax + tip; 

	
	cout <<"Calculating your total... " << endl;
	cout << endl;


	cout << "Here is the bill for "  << name <<  "." << endl;

	cout <<"--- " << endl;
	
	cout<<"Subtotal:		 " << subtotal << endl;

	cout<<"Tax:			" << tax << endl;

	cout<<"Tip:			" << tip << endl;
	cout<<"Total:	 		" << total << endl;

	


}