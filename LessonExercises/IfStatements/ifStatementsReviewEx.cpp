#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

// void exercise1()

	// This exercise will ask the user for 3 integers
	// It will print the smallest of the number back

	// Example Run:

	// Please enter 3 numbers.
	// 4
	// 9
	// 43
	// The smallest number is 43.

	// TODO: Add your code below
// {	
// 	cout << "Please enter 3 numbers" << "." << endl;
// 	double x;
// 	cin >> x;		
// 	double y;
// 	cin >> y;
// 	double z;
// 	cin >> z;
// 	double minimum; 
// 	if (x < y)
// 	{
// 		minimum = x;
// 	}
// 	else
// 	{
// 		minimum = y;
// 	}
// 	if (minimum < z)
// 	{
// 		cout << "The smallest number is " << minimum << endl;
// 	}	
// 	else
// 	{
// 		cout <<  "The smallest nubmer is " << z << "." << endl;
// 	}
// }	
void exercise2()
{
	// This will be an extension of exercise 1

	// You will enter your scores from 4 exams.
	// Your code should drop the lowest score and average the remaining 3 test scores

	// Example Run:

	// Please enter your 4 test scores
	// 95
	// 32
	// 93
	// 94
	// Your average for the class is 94

	// Hint: how to remove a number from an average of a set of numbers 
	// Given a set of n numbers x_1, x_2, ... , x_n
	// The average of these numbers is sum(x_1, x_2, ... , x_n) / n
	// To remove 1 value (some x_i) from the set and calculate the new average, 
	// newAverage = (sum(x_1, x_2, ... , x_n) - x_i) / (n-1)

	
	// TODO: your code below


	cout << "Please enter your scores from 4 exams" << "." << endl;
	double a;
	cin >> a; 
	double b;
	cin >> b; 
	double c;
	cin >> c;
	double d;
	cin >> d;
	
	double minimum;
	double mini;
	if (a < b)
	{
		minimum = a;
	} 
	else
	{
		minimum = b;
	}
	if (minimum < c)
	{
		minimum = a;
	}
	else 
	{
		minimum = c;
	}
	if ( minimum < d)
	{
		cout << "The smallest number is " << minimum << "." << endl;
	}
	else
	{
		cout << "The smallest number is " << d << "." << endl;
	}

	double average;
	average = (a + b + c + d - minimum) / 3;
	cout << "The average of your exams after the lowest dropped score is " << average << "." << endl;
}

int main()
{
	cout << "Exercise 1" << endl;
	cout << "----------" << endl;
	// exercise1();
	cout << endl;
	cout << "Exercise 2" << endl;
	cout << "----------" << endl;
	exercise2();
}