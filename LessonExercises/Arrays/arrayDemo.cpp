#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string classes[4];      // We're taking 4 classes
    classes[0] = "Intro to Programming";
    classes[1] = "Physics";
    classes[2] = "Math";
    classes[3] = "English";

    double percentages[4];

    for (int i = 0; i < 4; i++)
    {
        percentages[i] = (rand() % (50-0)) + 50;
    }

    char grades[4];

    for (int i = 0; i < 4; i++)
    {
        if (percentages[i] >= 90 && percentages[i] <= 100)	
        {
            grades[i] = 'A';
        }
        if (percentages[i] >= 80 && percentages[i] <= 89)
        {
            grades[i] = 'B';
        }
        if (percentages[i] >= 70 && percentages[i] <= 79)
        {
            grades[i] = 'C';
        }	
        if (percentages[i] >= 60 && percentages[i] <= 69)
        {
            grades[i] = 'D';
        }
        if (percentages[i] <= 59)
        {
            grades[i] = 'F';
        }	
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "You got a " << grades[i] << " in " << classes[i] << endl;
    }


}