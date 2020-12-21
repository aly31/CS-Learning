#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{


	cout<<"This is a math quiz. It consists of ten questions."<<endl;
	cout<<"1. What is 2 + 2?"<<endl;
	int x;
	cin >> x;
	double sub;
	

	if (x != 4)
	{
		cout<<"That is incorrect!"<<endl;
		sub = 0;
		
	}
	else
	{
		if (x == 4)
		{
			cout<<"That is correct!"<<endl;
			sub = 1;
		}	
	}	

	cout<<"2. What is 2 - 2?"<<endl;
	int a;
	cin >> a;
	double yes;

	if (a != 0)
	{
		cout<<"That is incorrect!"<<endl;
		yes = 0;
	}
	else
	{
		if (a == 0)
		{
			cout<<"That is correct!"<<endl;
			yes = 1;
		}
	}
	
	cout<<"3. What is 3 + 4?"<<endl;
	int b;
	cin >> b;
	double no;

	if (b != 7)
	{
		cout<<"That is incorrect!"<<endl;
		no = 0;
	}	
	else
	{
		if (b == 7)
		{
			cout<<"That is correct!"<<endl;
			no = 1;
		}		
	}

	cout<<"4. What is 9 - 5?"<<endl;
	int c;
	cin >> c;
	double amount;

	if (c != 4)
	{
		cout<<"That is incorrect!"<<endl;
		amount = 0;
	}
	else
	{
		if (c == 4)
		{
			cout<<"That is correct!"<<endl;
			amount = 1;
		}	
	}	
	
	cout<<"5. What is 5 * 9?"<<endl;
	int d; 
	cin >> d;

	if (d !=45)
	{
		cout<<"That is incorrect!"<<endl;
	}
	else
	{
		if (d == 45)
		{
			cout<<"That is correct!"<<endl;
		}	
	}
	
	cout<<"6. What is 4 * 7?"<<endl;	
	int e;
	cin >> e;

	if (e != 28)
	{
		cout<<"That is incorrect!"<<endl;
	}
	else
	{
		if (e == 28)
		{
			cout<<"That is correct!"<<endl;
		}	
	}	
	
	cout<<"7. What is the remainder of 9/3?"<<endl;
	int f;
	cin >> f;

	if(f != 0)
	{
		cout<<"That is incorrect!"<<endl;
	}
	else
	{
		if (f == 0)
		{
			cout<<"That is correct!"<<endl;
		}	
	}

	cout<<"8. What is 10/2?"<<endl;
	int g;
	cin>> g;

	if(g != 5)
	{
		cout<<"That is incorrect!"<<endl;
	}
	else
	{
		if (g == 5)
		{
			cout<<"That is correct!"<<endl;
		}	
	}

	cout<<"9. What is (9 + 5) * 3?"<<endl;
	int h;
	cin>> h;

	if (h != 42)
	{
		cout<<"That is incorrect!"<<endl;
	}
	else
	{
		if (h == 42)
		{
			cout<<"That is correct!"<<endl;
		}	
	}

	cout<<"10. What is answer from question 2 * answer  from question 9?"<<endl;
	int i;
	cin>> i;

	if(i != 0)
	{
		cout<<"That is incorrect!"<<endl;
	}	
	else
	{	
		if (i == 0)
		{
			cout<<"That is correct!"<<endl;
		}
		
	}
	double total; 
	total = sub + yes + no + amount;

	cout<<"You got " << total << " out of 10 questions correct" << "." <<endl;


}

