#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{

	string s = "hi my name is ashwin";
	
	// Let's get the length of this string
	cout << s << endl;


	int s_len = s.length();

	for (int i = 0; i < s_len; i++) 
	{
		
		int asciiCode = s[i];
		cout << asciiCode << " ";
	}
	cout << endl;

}