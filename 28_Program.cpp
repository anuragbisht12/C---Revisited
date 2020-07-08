/*
C++ Exception Handling

An exception is a problem that arises during the execution of a program. 
A C++ exception is a response to an exceptional circumstance that arises while a program is running,
 such as an attempt to divide by zero.

Exceptions provide a way to transfer control from one part of a program to another.
 C++ exception handling is built upon three keywords: try, catch, and throw.

throw − A program throws an exception when a problem shows up. This is done using a throw keyword.

catch − A program catches an exception with an exception handler at the place in a program where
 you want to handle the problem. The catch keyword indicates the catching of an exception.

try − A try block identifies a block of code for which particular exceptions will be activated. 
It's followed by one or more catch blocks.

Assuming a block will raise an exception, a method catches an exception using a combination of
the try and catch keywords. A try/catch block is placed around the code that might generate an exception.
*/

/*
Throwing Exceptions
Exceptions can be thrown anywhere within a code block using throw statement. The operand of the throw statement determines a type for the exception and can be any expression and the type of the result of the expression determines the type of exception thrown.

Following is an example of throwing an exception when dividing by zero condition occurs −

double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}
Catching Exceptions
The catch block following the try block catches any exception. You can specify what type of exception you want to catch and this is determined by the exception declaration that appears in parentheses following the keyword catch.

try {
   // protected code
} catch( ExceptionName e ) {
  // code to handle ExceptionName exception
}
*/

#include <iostream> 
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }

    return 0;
}

/*
Define New Exceptions

You can define your own exceptions by inheriting and overriding exception class functionality.
Following is the example, 
which shows how you can use std::exception class to implement your own exception in standard way −
*/
#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
    const char *what() const throw()
    {
        return "C++ Exception";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException &e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        //Other errors
    }
}