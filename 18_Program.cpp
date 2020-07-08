/*
C++ Inline Functions

C++ inline function is powerful concept that is commonly used with classes. If a function is inline, 
the compiler places a copy of the code of that function at each point where the function is called at compile time.

Any change to an inline function could require all clients of the function to be recompiled because compiler would 
need to replace all the code once again otherwise it will continue with old functionality.

To inline a function, place the keyword inline before the function name and define the function before any calls
 are made to the function. The compiler can ignore the inline qualifier in case defined function is more than a line.

A function definition in a class definition is an inline function definition, even without the use of the inline specifier.
*/

#include <iostream>

using namespace std;

inline int Max(int x, int y)
{
    return (x > y) ? x : y;
}

// Main function for the program
int main()
{
    cout << "Max (20,10): " << Max(20, 10) << endl;
    cout << "Max (0,200): " << Max(0, 200) << endl;
    cout << "Max (100,1010): " << Max(100, 1010) << endl;

    return 0;
}

// Max (20,10): 20
// Max (0,200): 200
// Max (100,1010): 1010

/*
C++ this Pointer

Every object in C++ has access to its own address through an important pointer called this pointer.
 The this pointer is an implicit parameter to all member functions. Therefore, inside a member function, 
 this may be used to refer to the invoking object.

Friend functions do not have a this pointer, because friends are not members of a class. 
Only member functions have a this pointer.
*/

#include <iostream>

using namespace std;

class Box
{
public:
    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    int compare(Box box)
    {
        return this->Volume() > box.Volume();
    }

private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};

int main(void)
{
    Box Box1(3.3, 1.2, 1.5); // Declare box1
    Box Box2(8.5, 6.0, 2.0); // Declare box2

    if (Box1.compare(Box2))
    {
        cout << "Box2 is smaller than Box1" << endl;
    }
    else
    {
        cout << "Box2 is equal to or larger than Box1" << endl;
    }

    return 0;
}

// Constructor called.
// Constructor called.
// Box2 is equal to or larger than Box1

