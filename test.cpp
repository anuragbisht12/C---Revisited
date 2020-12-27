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
