/*
C++ Arrays

C++ provides a data structure, the array, 
which stores a fixed-size sequential collection of elements of the same type. 
An array is used to store a collection of data, but it is often more useful to think of 
an array as a collection of variables of the same type.

Instead of declaring individual variables, such as number0, number1, ..., and number99,
 you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] 
 to represent individual variables. A specific element in an array is accessed by an index.

All arrays consist of contiguous memory locations. The lowest address corresponds to the first
 element and the highest address to the last element.
*/

double balance[] = {1000.0, 2.0, 3.4, 17.0, 50.0};

int a[3][4] = {
    {0, 1, 2, 3},  /*  initializers for row indexed by 0 */
    {4, 5, 6, 7},  /*  initializers for row indexed by 1 */
    {8, 9, 10, 11} /*  initializers for row indexed by 2 */
};


//------Pointer to array------------------
#include <iostream>
using namespace std;

int main()
{
    // an array with 5 elements.
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;

    p = balance;

    // output each array element's value
    cout << "Array values using pointer " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    cout << "Array values using balance as address " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "*(balance + " << i << ") : ";
        cout << *(balance + i) << endl;
    }

    return 0;
}

// Array values using pointer
// *(p + 0) : 1000
// *(p + 1) : 2
// *(p + 2) : 3.4
// *(p + 3) : 17
// *(p + 4) : 50
// Array values using balance as address
// *(balance + 0) : 1000
// *(balance + 1) : 2
// *(balance + 2) : 3.4
// *(balance + 3) : 17
// *(balance + 4) : 50

//-----------Passing array to functions------------
#include <iostream>
using namespace std;

// function declaration:
double getAverage(int arr[], int size);

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

double getAverage(int arr[], int size)
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