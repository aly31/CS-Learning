#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;


int main()
{
	int x;
	double total;

	int questions;
	
	cout << "This is a math quiz. It consists of ten questions." <<endl;
	
	cout << questions + 1 << " What is 2 + 2?" <<endl;
	questions = 1;
	cin >> x;
	if (x != 4)
	{
		cout << "That is incorrect!" <<endl;	
	}
	else
	{
		cout << "That is correct!" <<endl;
		total = 1;		
	}	

	cout << questions + 1 << " What is 2 - 2?" <<endl;
	questions = questions + 1;
	cin >> x;
	if (x != 0)
	{
		cout << "That is incorrect!" <<endl;
	}
	else
	{
		cout << "That is correct!" <<endl;
		total = total + 1;	
	}

	cout << questions + 1 << " What is 3 + 4?" <<endl;
	questions = questions + 1;
	cin >> x;
	if (x != 7)
	{
		cout << "That is incorrect!" <<endl;
	}	
	else
	{
		cout << "That is correct!" <<endl;
		total = total + 1;
	}

	cout << questions + 1 << " What is 9 - 5?" <<endl;
	questions = questions + 1;
	cin >> x;
	if (x != 4)
	{
		cout << "That is incorrect!" <<endl;
	}
	else
	{
		cout << "That is correct!" <<endl;
		total = total + 1;		
	}	
	
	cout << questions + 1 << " What is 5 * 9?" <<endl;
	questions = questions + 1;
	cin >> x;
	if (x !=45)
	{
		cout << "That is incorrect!" <<endl;
	}
	else
	{
		cout << "That is correct!" <<endl;
		total = total + 1;		
	}
	
	cout << questions + 1 << " What is 4 * 7?" <<endl;	
	questions = questions + 1;
	cin >> x;
	if (x != 28)
	{
		cout << "That is incorrect!" <<endl;
	}
	else
	{
		cout << "That is correct!" <<endl;
		total= total + 1;		
	}	
	
	cout << questions + 1 << " What is the remainder of 9/3?" <<endl;
	questions = questions + 1;
	cin >> x;
	if(x != 0)
	{
		cout << "That is incorrect!" <<endl;
	}
	else
	{
		cout << "That is correct!" <<endl;
		total = total + 1;
	}

	cout << questions + 1 << " What is 10/2?" <<endl;
	questions = questions + 1;
	cin>> x;
	if(x != 5)
	{
		cout << "That is incorrect!" <<endl;
	}
	else
	{
		cout << "That is correct!" <<endl;
		total = total + 1;	
	}

	cout << questions + 1 << " What is (9 + 5) * 3?" <<endl;
	questions = questions + 1;
	cin>> x;
	if (x != 42)
	{
		cout << "That is incorrect!" <<endl;
	}
	else
	{
		cout << "That is correct!" <<endl;
		total = total + 1;
	}

	cout << questions + 1 << " What is answer from question 2 * answer  from question 9?" <<endl;
	questions = questions + 1;
	cin>> x;
	if(x != 0)
	{
		cout << "That is incorrect!" <<endl;
	}	
	else
	{	
		cout << "That is correct!" <<endl;
		total = total + 1;
	}
	
	double percentage;
	percentage = (total / questions ) * 100;
	
	cout << "You got " << total << " out of 10 questions correct" << "." << "That's a " << percentage << "%!" <<endl;
	if (percentage >= 90 && percentage <= 100)
	{
		cout << "A " << percentage << " is an A" << "." << endl;
	}
	if (percentage >= 80 && percentage <= 89)
	{
		cout << "A " << percentage << " is a B" << "." << endl;
	}
	if (percentage >= 70 && percentage <= 79)
	{
		cout << "A " << percentage << " is a C" << "." << endl;
	}
	if (percentage >= 60 && percentage <= 69)
	{
		cout << "A " << percentage << " is a D" << "." << endl;
	}
	if (percentage <= 59)
	{
		cout << "A " << percentage << " is a F" << "." << endl;
	}
	



	
}	

