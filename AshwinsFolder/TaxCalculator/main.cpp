#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Welcome to the Restaurant Tax and Tip Calculator." << endl;
	cout << "We take your subtotal and add tax and tip to calculate the total money you will pay." << endl;
	cout << "You will enter your subtotal and the percentage that you would like to tip below. Please enter them as prompted." << endl;

	string name;
	double subtotal;
	double taxPercentage = 8.75;
	double tipPercentage;

	double total;

	cout << "Please enter your name." << endl;
	getline(cin, name);
	cout << "Please enter your subtotal of everything you ordered now." << endl;
	cin >> subtotal;
	cout << "Please enter the percentage you would like to tip." << endl;
	cin >> tipPercentage;
	cout << "---" << endl;
	cout << "Calculating your total..." << endl;
	double taxAmount = ((taxPercentage / 100.0) * subtotal);
	double tipAmount = ((tipPercentage / 100.0) * subtotal);
	total = subtotal + taxAmount + tipAmount;
	cout << endl;
	cout << "Here is the bill for " + name << endl;
	cout << "---" << endl;
	cout << "Subtotal: \t" << subtotal << endl;
	printf("Tax: \t\t%.2f (Tax percentage: %.2f)\n", taxAmount, taxPercentage);
	printf("Tip: \t\t%.2f (Tip percentage: %.2f)\n", tipAmount, tipPercentage);
	printf("Total: \t\t%.2f\n", total);
	return 0;
} 
