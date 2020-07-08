/*
C++ Classes and Objects
The main purpose of C++ programming is to add object orientation to the C programming language and classes 
are the central feature of C++ that supports 
object-oriented programming and are often called user-defined types.

A class is used to specify the form of an object and it combines data representation and methods 
for manipulating that data into one neat package. The data and functions within a class are called members of the class.

*/

/*

C++ Class Definitions
When you define a class, you define a blueprint for a data type. This doesn't actually define any data, but 
it does define what the class name means, that is, what an object of the class will consist of and what operations 
can be performed on such an object.

A class definition starts with the keyword class followed by the class name; and the class body, enclosed by a pair 
of curly braces. A class definition must be followed either by a semicolon or a list of declarations. For example, 
we defined the Box data type using the keyword class as follows −

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};
The keyword public determines the access attributes of the members of the class that follows it. A public member
 can be accessed from outside the class anywhere within the scope of the class object. You can also specify the members of a class as private or protected which we will discuss in a sub-section.

*/

/*
Define C++ Objects

A class provides the blueprints for objects, so basically an object is created from a class. 
We declare objects of a class with exactly the same sort of declaration that we declare variables of basic types.
Following statements declare two objects of class Box −

Box Box1;          // Declare Box1 of type Box
Box Box2;          // Declare Box2 of type Box
Both of the objects Box1 and Box2 will have their own copy of data members.

*/

#include <iostream>

using namespace std;

class Box
{
public:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};

int main()
{
    Box Box1;            // Declare Box1 of type Box
    Box Box2;            // Declare Box2 of type Box
    double volume = 0.0; // Store the volume of a box here

    // box 1 specification
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // box 2 specification
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // volume of box 1
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1 : " << volume << endl;

    // volume of box 2
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Volume of Box2 : " << volume << endl;
    return 0;
}

/*
Member functions

A member function of a class is a function that has its definition or its prototype within the class definition 
like any other variable. It operates on any object of the class of which it is a member,
and has access to all the members of a class for that object.

If you like, you can define the same function outside the class using the scope resolution operator (::) as follows −
*/

#include <iostream>

using namespace std;

class Box
{
public:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box

    // Member functions declaration
    double getVolume(void);
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

// Member functions definitions
double Box::getVolume(void)
{
    return length * breadth * height;
}

void Box::setLength(double len)
{
    length = len;
}
void Box::setBreadth(double bre)
{
    breadth = bre;
}
void Box::setHeight(double hei)
{
    height = hei;
}

// Main function for the program
int main()
{
    Box Box1;            // Declare Box1 of type Box
    Box Box2;            // Declare Box2 of type Box
    double volume = 0.0; // Store the volume of a box here

    // box 1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // volume of box 1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // volume of box 2
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;
    return 0;
}
