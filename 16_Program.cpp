/*
C++ Class Constructor and Destructor

A class constructor is a special member function of a class that is executed whenever we create new objects of that class.


*/

#include <iostream>
using namespace std;

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(); // This is the constructor
private:
    double length;
};

// Member functions definitions including constructor
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
void Line::setLength(double len)
{
    length = len;
}
double Line::getLength(void)
{
    return length;
}

// Main function for the program
int main()
{
    Line line;

    // set line length
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    return 0;
}

/*
Parameterized Constructor
A default constructor does not have any parameter, but if you need, a constructor can have parameters.
*/

#include <iostream>
using namespace std;
class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(double len); // This is the constructor

private:
    double length;
};

// Member functions definitions including constructor
Line::Line(double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}
void Line::setLength(double len)
{
    length = len;
}
double Line::getLength(void)
{
    return length;
}

// Main function for the program
int main()
{
    Line line(10.0);

    // get initially set length.
    cout << "Length of line : " << line.getLength() << endl;

    // set line length again
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    return 0;
}

/*
The Class Destructor
A destructor is a special member function of a class that is executed whenever an object of it's class goes out of scope or 
whenever the delete expression is applied to a pointer to the object of that class.

A destructor will have exact same name as the class prefixed with a tilde (~) and it can neither return a value nor can it 
take any parameters. Destructor can be very useful for releasing resources before 
coming out of the program like closing files, releasing memories etc.
*/

Live Demo
#include <iostream>

    using namespace std;
class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line();  // This is the constructor declaration
    ~Line(); // This is the destructor: declaration

private:
    double length;
};

// Member functions definitions including constructor
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}
void Line::setLength(double len)
{
    length = len;
}
double Line::getLength(void)
{
    return length;
}

// Main function for the program
int main()
{
    Line line;

    // set line length
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    return 0;
}

/*
C++ Copy Constructor

The copy constructor is a constructor which creates an object by initializing it with an object of the same class, 
which has been created previously. The copy constructor is used to −

Initialize one object from another of the same type.
Copy an object to pass it as an argument to a function.
Copy an object to return it from a function.
If a copy constructor is not defined in a class, the compiler itself defines one.If the class has pointer variables
and has some dynamic memory allocations, then it is a must to have a copy constructor.

*/

#include <iostream>

using namespace std;

class Line
{
public:
    int getLength(void);
    Line(int len);         // simple constructor
    Line(const Line &obj); // copy constructor
    ~Line();               // destructor

private:
    int *ptr;
};

// Member functions definitions including constructor
Line::Line(int len)
{
    cout << "Normal constructor allocating ptr" << endl;

    // allocate memory for the pointer;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr; // copy the value
}

Line::~Line(void)
{
    cout << "Freeing memory!" << endl;
    delete ptr;
}

int Line::getLength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout << "Length of line : " << obj.getLength() << endl;
}

// Main function for the program
int main()
{

    Line line1(10);

    Line line2 = line1; // This also calls copy constructor

    display(line1);
    display(line2);

    return 0;
}

// Normal constructor allocating ptr
// Copy constructor allocating ptr.
// Copy constructor allocating ptr.
// Length of line : 10
// Freeing memory!
// Copy constructor allocating ptr.
// Length of line : 10
// Freeing memory!
// Freeing memory!
// Freeing memory!


