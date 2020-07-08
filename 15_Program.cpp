/*
C++ Class Access Modifiers

Data hiding is one of the important features of Object Oriented Programming which allows preventing the functions of a 
program to access directly the internal representation of a class type. The access restriction to the class members is
 specified by the labeled public, private, 
and protected sections within the class body. The keywords public, private, and protected are called access specifiers.

class Base { 
   public:
      // public members go here
      protected:
 
   // protected members go here
   private:
   // private members go here
 
};
A public member is accessible from anywhere outside the class but within a program. 

A private member variable or function cannot be accessed, or even viewed from outside the class. 
Only the class and friend functions can access private members

A protected member variable or function is very similar to a private member but it provided one 
additional benefit that they can be accessed in child classes which are called derived classes.

*/
#include <iostream>
using namespace std;

class Box
{
protected:
    double width;
};

class SmallBox : Box
{ // SmallBox is the derived class.
public:
    void setSmallWidth(double wid);
    double getSmallWidth(void);
};

// Member functions of child class
double SmallBox::getSmallWidth(void)
{
    return width;
}

void SmallBox::setSmallWidth(double wid)
{
    width = wid;
}

// Main function for the program
int main()
{
    SmallBox box;

    // set box width using member function
    box.setSmallWidth(5.0);
    cout << "Width of box : " << box.getSmallWidth() << endl;

    return 0;
}