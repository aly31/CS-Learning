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

	if (x != 4)
	{
		cout<<"That is incorrect!"<<endl;
	}
	else
	{
		if (x == 4)
		{
			cout<<"That is correct!"<<endl;
		}	
	}	

	cout<<"2. What is 2 - 2?"<<endl;
	int a;
	cin >> a;

	if (a != 0)
	{
		cout<<"That is incorrect!"<<endl;
	}
	else
	{
		if (a == 0)
		{
			cout<<"That is correct!"<<endl;
		}
	}
	
	cout<<"3. What is 3 + 4?"<<endl;
	int b;
	cin >> b;

	if (b != 7)
	{
		cout<<"That is incorrect!"<<endl;
	}	
	else
	{
		if (b == 7)
		{
			cout<<"That is correct!"<<endl;
		}		
	}

	cout<<"4. What is 9 - 5?"<<endl;
	int c;
	cin >> c;

	if (c != 4)
	{
		cout<<"That is incorrect!"<<endl;
	}
	else
	{
		if (c == 4)
		{
			cout<<"That is correct!"<<endl;
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

}

