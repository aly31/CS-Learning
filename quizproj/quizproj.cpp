#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;


int main()
{
	int x;
	double total;
	double subtotal;
	cout <<"This is a math quiz. It consists of ten questions." <<endl;
	
	cout <<"1. What is 2 + 2?" <<endl;
	cin >> x;
	if (x != 4)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;	
	}
	else
	{
		cout <<"That is correct!" <<endl;
		total = 1;		
	}	

	cout <<"2. What is 2 - 2?" <<endl;
	cin >> x;
	if (x != 0)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;
	}
	else
	{
		cout <<"That is correct!" <<endl;
		total = total + 1;	
	}

	cout <<"3. What is 3 + 4?" <<endl;
	cin >> x;
	if (x != 7)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;
	}	
	else
	{
		cout <<"That is correct!" <<endl;
		total = total + 1;
	}

	cout <<"4. What is 9 - 5?" <<endl;
	cin >> x;
	if (x != 4)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;
	}
	else
	{
		cout <<"That is correct!" <<endl;
		total = total + 1;		
	}	
	
	cout <<"5. What is 5 * 9?" <<endl;
	cin >> x;
	if (x !=45)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;
	}
	else
	{
		cout <<"That is correct!" <<endl;
		total = total + 1;		
	}
	
	cout <<"6. What is 4 * 7?" <<endl;	
	cin >> x;
	if (x != 28)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;
	}
	else
	{
		cout <<"That is correct!" <<endl;
		total= total + 1;		
	}	
	
	cout <<"7. What is the remainder of 9/3?" <<endl;
	cin >> x;
	if(x != 0)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;
	}
	else
	{
		cout <<"That is correct!" <<endl;
		total = total + 1;
	}

	cout <<"8. What is 10/2?" <<endl;
	cin>> x;
	if(x != 5)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;
	}
	else
	{
		cout <<"That is correct!" <<endl;
		total = total + 1;	
	}

	cout <<"9. What is (9 + 5) * 3?" <<endl;
	cin>> x;
	if (x != 42)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;
	}
	else
	{
		cout <<"That is correct!" <<endl;
		total = total + 1;
	}

	cout <<"10. What is answer from question 2 * answer  from question 9?" <<endl;
	cin>> x;
	if(x != 0)
	{
		cout <<"That is incorrect!" <<endl;
		subtotal = 0;
	}	
	else
	{	
		cout <<"That is correct!" <<endl;
		total = total + 1;
	}
	double percentage;
	double totals;
	totals = (total + subtotal);
	percentage = (totals / 10) * 100;
	
	cout <<"You got " << total << " out of 10 questions correct" << "." << "That's a " << percentage << "%!" <<endl;
	if (percentage == 90 - 100)
	{
		cout <<"A " << percentage << "is an A" << "." << endl;
	}
	if (percentage == 80 - 89)
	{
		cout <<"A " << percentage << "is a B" << "." << endl;
	}
}	

