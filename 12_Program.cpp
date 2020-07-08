/*
C++ Basic Input/Output

The C++ standard libraries provide an extensive set of input/output capabilities which we will see in subsequent chapters.
 This chapter will discuss very basic and most common I/O operations required for C++ programming.

C++ I/O occurs in streams, which are sequences of bytes. If bytes flow from a device like a keyboard, a disk drive, 
or a network connection etc. to main memory, this is called input operation and if bytes flow from main memory to a device 
like a display screen, a printer, a disk drive, or a network connection, etc., this is called output operation.

I/O Library Header Files
There are following header files important to C++ programs −

Sr.No	Header File & Function and Description
1	
<iostream>

This file defines the cin, cout, cerr and clog objects, which correspond to the standard input stream,
 the standard output stream, the un-buffered standard error stream and the buffered standard error stream, respectively.

2	
<iomanip>

This file declares services useful for performing formatted I/O with so-called parameterized stream manipulators,
 such as setw and setprecision.

3	
<fstream>

This file declares services for user-controlled file processing. We will discuss about it in detail in File and 
Stream related chapter.
*/

#include <iostream>

using namespace std;

int main()
{
    char str[] = "Hello C++";

    cout << "Value of str is : " << str << endl;
}


#include <iostream>
using namespace std;

int main()
{
    char name[50];

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;
}

// The predefined object cerr is an instance of ostream class.The cerr object is said to be attached to the 
// standard error device, which is also a display screen but the object cerr is un - 
// buffered and each stream insertion to cerr causes its output to appear immediately.
#include <iostream>
                                                                                                                                                                                           using namespace std;

int main()
{
    char str[] = "Unable to read....";

    cerr << "Error message : " << str << endl;
}

// The predefined object clog is an instance of ostream class.The clog object is said to be attached to the standard 
// error device, 
// which is also a display screen but the object clog is buffered.

#include <iostream>
using namespace std;

int main()
{
    char str[] = "Unable to read....";

    clog << "Error message : " << str << endl;
}

