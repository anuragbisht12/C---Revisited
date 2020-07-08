/*
Type Qualifiers in C++
The type qualifiers provide additional information about the variables they precede.

Sr.No	Qualifier & Meaning
1	
const

Objects of type const cannot be changed by your program during execution.

2	
volatile

The modifier volatile tells the compiler that a variable's value may be changed 
in ways not explicitly specified by the program.

3	
restrict

A pointer qualified by restrict is initially the only means by which the object 
it points to can be accessed. Only C99 adds a new type qualifier called restrict.

*/

/*
Storage Classes in C++

A storage class defines the scope (visibility) and life-time of variables and/or functions
 within a C++ Program. These specifiers precede the type that they modify. There are following 
 storage classes, which can be used in a C++ Program

auto : default storage class

register:
The register storage class is used to define local variables that should be stored in a register instead of RAM.
 This means that the variable has a maximum size equal to the register size (usually one word) 
and can't have the unary '&' operator applied to it (as it does not have a memory location).

static:
The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program 
instead of creating and destroying it each time it comes into and goes out of scope. 
Therefore, making local variables static allows them to maintain their values between function calls.


extern:
The extern storage class is used to give a reference of a global variable that is visible to ALL the program files.
 When you use 'extern' the variable cannot be initialized as all it does is
 point the variable name at a storage location that has been previously defined.

mutable:
The mutable specifier applies only to class objects, which are discussed later in this tutorial.
 It allows a member of an object to override const member function.
 That is, a mutable member can be modified by a const member function.

*/

#include <iostream>
using namespace std;

int main(){
    auto int month;

    register int miles;

    return 0;
}



//---------------------------static------------
#include <iostream>
using namespace std;
void func(void);
static int count=10; //Global variable

int main()
{
    while(count--)
    func();
}

void func(void){
    static int i=5;
    i++;
    count<<"i is "<<i;
    count<<" and count is "<<count<<endl;
}


//--------------extern-------------------------------
//main.cpp
#include <iostream>
int count;
extern void write_extern();

int main(){
    count =5;
    write_extern();

    return 0;
}

//support.cpp
#include <iostream>

extern int count;
void write_extern(void){
    std::out<<"Count is "<<count<<std::endl;
}

// $g++ main.cpp support.cpp - o write
