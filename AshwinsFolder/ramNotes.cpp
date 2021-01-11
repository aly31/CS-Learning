#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int x = 5;  // Declare a integer variable
    cout << &x << endl;     // &variableName is the syntax to get the address of a variable 
    int *p = &x + 1;        // p stores the address of the variable x. but we added one to it

    cout << *p << endl;     // so if we print the value here, get some random number
    p = p -1;               // If we go baack to the right addressw
    cout << *p << endl;     // We get 5, which is the value of the variable x
    cout << sizeof(x) << endl;    // sizeof is a function that tells you the size (in bytes) of the argument 
    



    // RAM is your main memory -> can access any location in the same amt of time
    // So that means, accessing ram is very fast for your CPU
    // So the more you have, the more stuff you can have open because theres just more memory for programs to use

    // So, if we run out of RAM, we have to tap into our storage, which is super slow to access (compared to RAM) 
        // Probably like 100x slower

    // This is compared with your storage, which traditionally used to be hard drives
        // Storage used to be on hard drives, which are metal disks that spin super fast
            // Theres a magnetic head that can read and write bits on to this metal disk
            // So with this in mind, it now matters where your data is stored on the disk
            // The disk might have to spin around again for you to access something

}