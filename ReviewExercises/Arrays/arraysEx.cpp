#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{

    srand(time(NULL));  // Get a random seed

    const int arr_size = 10;            // I should be able to change this const value to whatever I want, and the code should run correctly
    int arr[arr_size];

    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = (rand() % 1000) + 1;       // Random integer value from 1 to 1000
    }


    // Printing out the array for debugging purposes
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << endl;
    cout << "Exercise 1" << endl;

    /*
        Exercise 1: Given an input array of positive integers, output the amount of even numbers in the array
        Input: int arr[]    (Declared above line 10)
        Output: amount of even numbers in the array (int)
    */

    int amountOfEvenNumbers = -1;       // A -1 in this case implies something went wrong! (can't have -1 even numbers in the array right?)
    // Do exercise 1 here


    
    // Printing out the output to test correctness
    cout << "There are " << amountOfEvenNumbers << " in the array." << endl;

    cout << endl;




    cout << "Exercise 2" << endl;
    /*
        Exercise 2: Given an input array of positive integers, calculate the average value of the array
        Input: int arr[]    (Declared line 10)
        Output: the average of all the values in the array (double)
    */

    double avgValueOfArray;
    //Do exercise 2 here










    //Printing out the output to test correctness
    cout << "The average value is " << avgValueOfArray << endl;
    cout << endl;





    cout << "Exercise 3" << endl;
    /*
        Exercise 3: Given an input array of positive integers and another integer, is the integer in the array?
        Input:  int arr[]    (Declared line 10)
                int target; (Declared line 67) 
        Output: (Figure this out!)


    */
    
    int target = (rand() % 1000) + 1;       // Get another random integer here
    cout << "Is " << target << " in our array?" << endl;        // Print out the value of target to test correctness
    


    // Do exercise 3 here








    //Print out the value of our output variable to test correctness also
    cout << "Change this cout statement to print the value of our output here!" << endl;


}