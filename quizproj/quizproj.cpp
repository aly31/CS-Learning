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
}