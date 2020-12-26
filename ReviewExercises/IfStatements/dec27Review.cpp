#include <stdlib.h>
#include <string>
#include <iostream>
#include <assert.h>

using namespace std;

bool isLeapYear(int year)
{
	
	bool leapYear;

	//TODO: Determine if the year that user enters is a leap year or not
	// You are given a year already. The variable year is declared on line 7 in parentheses

	// Print out "____ is a leap year" or "____ is not a leap year" as output.
	// Also assign either True or false to the variable leapYear declared on line 13
	// Years should only start from 0. 0 is a valid year and is a leap year.
	// If an invalid year is given (negative year), we will assign the variable leapYear to false
	// We also should print out an error message for invalid years








	// Don't worry about code below this line
	return leapYear;
		
}		

double incomeTaxCalculator(double annualIncome)
{
	

	double taxOwed;

	// TODO: Calculate the annual income using the 2020 US federal tax bracket system for single filers (URL below)
	// https://www.nerdwallet.com/article/taxes/federal-income-tax-brackets
	// You are given a income already. The variable annualIncome is declared on line 34

	// Print out the amount the person owes in taxes







	// Don't worry about code below this line
	return taxOwed;
}




int main()
{
	cout << "Is Leap Year exercise" << endl;
	int year;
	cout << "Enter a year" << endl;
	cin >> year;

	isLeapYear(year);
	
	testIsLeapYear();


	double annualIncome;
	cout << "Enter your annual income" << endl;
	cin >> annualIncome;
	incomeTaxCalculator(annualIncome);

}

void testIsLeapYear()
{
	assert(isLeapYear(2004) == true);
	assert(isLeapYear(10) == false);
	assert(isLeapYear(765) == false);
	assert(isLeapYear(5) == false);
	assert(isLeapYear(2012) == true);
	assert(isLeapYear(2014) == false);
	assert(isLeapYear(0) == true);
}
