/*
C++ Signal Handling

Signals are the interrupts delivered to a process by the operating system which can terminate a program prematurely. 
You can generate interrupts by pressing Ctrl+C on a UNIX, LINUX, Mac OS X or Windows system.

There are signals which can not be caught by the program but there is a following list of signals which you can 
catch in your program and can take appropriate actions based on the signal. These signals are defined in C++ header 
file <csignal>.
*/
#include <iostream>
#include <csignal>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // cleanup and close up stuff here
    // terminate program

    exit(signum);
}

int main()
{
    // register signal SIGINT and signal handler
    signal(SIGINT, signalHandler);

    while (1)
    {
        cout << "Going to sleep...." << endl;
        sleep(1);
    }

    return 0;
}

// Going to sleep....
// Going to sleep....
// Going to sleep....

#include <iostream>
#include <csignal>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // cleanup and close up stuff here
    // terminate program

    exit(signum);
}

int main()
{
    int i = 0;
    // register signal SIGINT and signal handler
    signal(SIGINT, signalHandler);

    while (++i)
    {
        cout << "Going to sleep...." << endl;
        if (i == 3)
        {
            raise(SIGINT);
        }
        sleep(1);
    }

    return 0;
}

// Going to sleep....
// Going to sleep....
// Going to sleep....
// Interrupt signal (2) received.