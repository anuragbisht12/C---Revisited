/*
C++ Pointers

C++ pointers are easy and fun to learn. Some C++ tasks are performed more easily with pointers, 
and other C++ tasks, such as dynamic memory allocation, cannot be performed without them.

As you know every variable is a memory location and every memory location has its 
address defined which can be accessed using ampersand (&) operator which denotes an address in memory. 
*/

#include <iostream>

using namespace std;
int main()
{
    int var1;
    char var2[10];

    cout << "Address of var1 variable: ";
    cout << &var1 << endl;

    cout << "Address of var2 variable: ";
    cout << &var2 << endl;

    return 0;
}

// Address of var1 variable: 0xbfebd5c0
// Address of var2 variable: 0xbfebd5b6

/*
What are Pointers?

A pointer is a variable whose value is the address of another variable. Like any variable or constant, you must declare a pointer before you can work with it. The general form of a pointer variable declaration is −

type *var-name;
Here, type is the pointer's base type; it must be a valid C++ type and var-name is the name of the pointer variable.
 The asterisk you used to declare a pointer is the same asterisk that you use for multiplication. 
However, in this statement the asterisk is being used to designate a variable as a pointer. 
Following are the valid pointer declaration −

int    *ip;    // pointer to an integer
double *dp;    // pointer to a double
float  *fp;    // pointer to a float
char   *ch     // pointer to character
The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same,
 a long hexadecimal number that represents a memory address. The only difference between pointers of different 
 data types is the data type of the variable or constant that the pointer points to.
*/

#include <iostream>

using namespace std;

int main()
{
    int var = 20; // actual variable declaration.
    int *ip;      // pointer variable

    ip = &var; // store address of var in pointer variable

    cout << "Value of var variable: ";
    cout << var << endl;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    return 0;
}

// Value of var variable: 20
// Address stored in ip variable: 0xbfc601ac
// Value of *ip variable: 20

/*
NULL pointer

It is always a good practice to assign the pointer NULL to a pointer variable 
in case you do not have exact address to be assigned. This is done at the time of variable declaration.
 A pointer that is assigned NULL is called a null pointer.

The NULL pointer is a constant with a value of zero defined in several standard libraries, including iostream.
 Consider the following program −

*/
#include <iostream>

using namespace std;
int main()
{
    int *ptr = NULL;
    cout << "The value of ptr is " << ptr;

    return 0;
}

// The value of ptr is 0

/*
C++ Pointer Arithmetic

As you understood pointer is an address which is a numeric value; therefore, you can perform arithmetic operations on a
 pointer just as you can a numeric value. There are four arithmetic operators that can be used on pointers: ++, --, +, and -


To understand pointer arithmetic, let us consider that ptr is an integer pointer which points to the address 1000. 
Assuming 32-bit integers, let us perform the following arithmetic operation on the pointer −
*/

Live Demo
#include <iostream>

    using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;

    // let us have array address in pointer.
    ptr = var;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // point to the next location
        ptr++;
    }

    return 0;
}

// Address of var[0] = 0xbfa088b0
// Value of var[0] = 10
// Address of var[1] = 0xbfa088b4
// Value of var[1] = 100
// Address of var[2] = 0xbfa088b8
// Value of var[2] = 200

// If p1 and p2 point to variables that are related to each other,
//  such as elements of the same array, then p1 and p2 can be meaningfully compared.

/*
C++ Pointers vs Arrays

Pointers and arrays are strongly related. In fact, pointers and arrays are interchangeable in many cases.
For example, a pointer that points to the 
beginning of an array can access that array by using either pointer arithmetic or array-style indexing. 
*/

Live Demo
#include <iostream>

    using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;

    // let us have array address in pointer.
    ptr = var;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // point to the next location
        ptr++;
    }

    return 0;
}

// Address of var[0] = 0xbfa088b0
// Value of var[0] = 10
// Address of var[1] = 0xbfa088b4
// Value of var[1] = 100
// Address of var[2] = 0xbfa088b8
// Value of var[2] = 200

/*
C++ Array of Pointers

There may be a situation, when we want to maintain an array, which can store pointers to an int or char or
 any other data type available. 
Following is the declaration of an array of pointers to an integer −

int *ptr[MAX];
This declares ptr as an array of MAX integer pointers. Thus, each element in ptr, now holds a pointer to an int value.
 Following example makes use of three integers which will be stored in an array of pointers as follows −
*/

#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr[MAX];

    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i]; // assign the address of integer.
    }

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }

    return 0;
}

// Value of var[0] = 10
// Value of var[1] = 100
// Value of var[2] = 200

include<iostream>

    using namespace std;
const int MAX = 4;

int main()
{
    const char *names[MAX] = {"Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali"};

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << (names + i) << endl;
    }

    return 0;
}

// Value of names[0] = 0x7ffd256683c0
// Value of names[1] = 0x7ffd256683c8
// Value of names[2] = 0x7ffd256683d0
// Value of names[3] = 0x7ffd256683d8

/*
Passing Pointers to Functions in C++

C++ allows you to pass a pointer to a function. To do so, simply declare the function parameter as a pointer type.

*/

Live Demo
#include <iostream>
#include <ctime>

    using namespace std;
void getSeconds(unsigned long *par);

int main()
{
    unsigned long sec;
    getSeconds(&sec);

    // print the actual value
    cout << "Number of seconds :" << sec << endl;

    return 0;
}

void getSeconds(unsigned long *par)
{
    // get the current number of seconds
    *par = time(NULL);

    return;
}

// Number of seconds : 1294450468

#include <iostream>
using namespace std;

// function declaration:
double getAverage(int *arr, int size);

int main()
{
    // an int array with 5 elements.
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    // pass pointer to the array as an argument.
    avg = getAverage(balance, 5);

    // output the returned value
    cout << "Average value is: " << avg << endl;

    return 0;
}

double getAverage(int *arr, int size)
{
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = double(sum) / size;

    return avg;
}

// Average value is : 214.4

/*
Return Pointer from Functions in C++
*/

#include <iostream>
#include <ctime>

using namespace std;

// function to generate and retrun random numbers.
int *getRandom()
{
    static int r[10];

    // set the seed
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}

// main function to call above defined function.
int main()
{
    // a pointer to an int.
    int *p;

    p = getRandom();
    for (int i = 0; i < 10; i++)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    return 0;
}

// 624723190
// 1468735695
// 807113585
// 976495677
// 613357504
// 1377296355
// 1530315259
// 1778906708
// 1820354158
// 667126415
// *(p + 0) : 624723190
// *(p + 1) : 1468735695
// *(p + 2) : 807113585
// *(p + 3) : 976495677
// *(p + 4) : 613357504
// *(p + 5) : 1377296355
// *(p + 6) : 1530315259
// *(p + 7) : 1778906708
// *(p + 8) : 1820354158
// *(p + 9) : 667126415

