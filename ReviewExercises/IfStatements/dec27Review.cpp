#include <stdlib.h>
#include <string>
#include <iostream>
#include <assert.h>


using namespace std;
void testIsLeapYear();
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
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				leapYear = true;
			}
			else
			{
				leapYear = false;
			}
		}
		else
		{
			leapYear = true;
		}
	}
	else
	{
		leapYear = false;
	}
	if (leapYear == false)
	{
		cout << year << " isn't a leap year." << endl;
	}
	else
	{
		cout << year << " is a leap year." << endl;
	}
	if (year < 0)
	{
		leapYear = false; 
		cout << "That's an invalid input!" << endl;
	}

	
	









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
	if (annualIncome >= 0 && annualIncome <= 0)
	{
		taxOwed = 0.10 * annualIncome;
	}
	if (annualIncome >= 9876 && annualIncome <= 40125)
	{
		taxOwed = 987 + (0.12 * (annualIncome - 9875));
	}
	if (annualIncome >= 40126 && annualIncome <= 85825)
	{
		taxOwed = 4617.50 + (0.22 * (annualIncome - 40125));
	}
	if (annualIncome >= 85526 && annualIncome <= 163300)
	{
		taxOwed = 14605.50 + (0.24 * (annualIncome - 85525));
	}
	if (annualIncome >= 163301 && annualIncome <= 207350)
	{
		taxOwed = 33271.50 + (0.32 * (annualIncome - 163000));
	}
	if (annualIncome >= 207351 && annualIncome <= 518400)
	{
		taxOwed = 47367.50 + (0.35 * (annualIncome - 207350));
	}
	if (annualIncome >=518401)
	{
		taxOwed = 156235 + (0.37 * (annualIncome - 518400));
	}
	cout << " You owe " << taxOwed << "." << endl;






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
