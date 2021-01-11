#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

    /*
    This gonna be a demo of multidimensional arrays

    A multidim array is an array of arrays

    Reviews a little bit about Arrays
        - The size of an array is fixed and unchangeable, and they can't be variables
        - It's a list of variables
            - Each position is called the index (starts at 0)
            - The value at the index is called an element
        - Order of the list is fixed
            - and it matters
        - Stored in memory next to each other (each element)
        - All elements have to be of the same data type
    */

   // How to declare an array
    // Arrays use [] a lot
        // To decalre the size and to get the element at an index

    // Let's declare an int array
    int arrayName[5];       // An array of size 5
    

    // I want to assign the value 1 to the element at index 4 in arrayName
    arrayName[4] = 1;       // Assigns 1 to the position 4

    arrayName[0] = 45;
    arrayName[1] = 34;
    arrayName[2] = 3;
    arrayName[3] = 79;






    // How to print each element in a 1d array
    
    // and so on...
    // This isnt very scalable... 

    // Let's use a for loop!
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout << arrayName[i] << endl;
    }



    // We think of arrays as lists

    // We can also have an array of arrays
    const int rows = 30;
    const int cols = 20;
    int example2dArray[rows][cols];      // 2d array of 10x20

    // How to explore every element in the array (iterating over a 2d array)

    



    // Lets assign the value -44 to every element in example2dArray

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            example2dArray[i][j] = -44;
        }
    }


    // This is pretty printing the array!
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           cout << example2dArray[i][j] << "\t";
        }
        cout << endl;
    }





}