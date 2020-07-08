/*
C++ Preprocessor

The preprocessors are the directives, which give instructions to the compiler to preprocess
 the information before actual compilation starts.

All preprocessor directives begin with #, and only white-space characters may appear before a
 preprocessor directive on a line. Preprocessor directives are not C++ statements, so they do not end in a semicolon (;).

You already have seen a #include directive in all the examples. This macro is used to include a header
file into the source file.

There are number of preprocessor directives supported by C++ like #include, #define, #if, #else, #line, etc.
*/

#include <iostream>
using namespace std;

#define PI 3.14159

int main()
{
    cout << "Value of PI :" << PI << endl;

    return 0;
}

/*
Function-Like Macros
You can use #define to define a macro which will take argument as follows −
*/

#include <iostream>
using namespace std;

#define MIN(a, b) (((a) < (b)) ? a : b)

int main()
{
    int i, j;

    i = 100;
    j = 30;

    cout << "The minimum is " << MIN(i, j) << endl;

    return 0;
}

/*

Predefined C++ Macros
C++ provides a number of predefined macros mentioned below −

Sr.No	Macro & Description
1	
__LINE__

This contains the current line number of the program when it is being compiled.

2	
__FILE__

This contains the current file name of the program when it is being compiled.

3	
__DATE__

This contains a string of the form month/day/year that is the date of the translation of the source file into object code.

4	
__TIME__

This contains a string of the form hour:minute:second that is the time at which the program was compiled.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

    return 0;
}

// Value of __LINE__ : 6
// Value of __FILE__ : test.cpp
// Value of __DATE__ : Feb 28 2011
// Value of __TIME__ : 18:52:48

