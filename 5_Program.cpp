/*
Function Arguments

If a function is to use arguments, it must declare variables that accept the values of the arguments. 
These variables are called the formal parameters of the function.

The formal parameters behave like other local variables inside the function and are created upon 
entry into the function and destroyed upon exit.

While calling a function, there are two ways that arguments can be passed to a function −

Sr.No	Call Type & Description
1	Call by Value
This method copies the actual value of an argument into the formal parameter of the function. 
In this case, changes made to the parameter inside the function have no effect on the argument.

2	Call by Pointer
This method copies the address of an argument into the formal parameter. Inside the function, 
the address is used to access the actual argument used in the call. This means that changes made 
to the parameter affect the argument.

3	Call by Reference
This method copies the reference of an argument into the formal parameter. Inside the function, 
the reference is used to access the actual argument used in the call. This means that changes
made to the parameter affect the argument.

By default, C++ uses call by value to pass arguments. In general, this means that code within a 
function cannot alter the arguments used to call the function and above mentioned example while 
calling max() function used the same method.
*/

//---------call by value ---------------------
// function definition to swap the values.
void swap(int x, int y)
{
    int temp;

    temp = x; /* save the value of x */
    x = y;    /* put y into x */
    y = temp; /* put x into y */

    return;
}

//-------call by pointer-------------------
// function definition to swap the values.
void swap(int *x, int *y)
{
    int temp;
    temp = *x; /* save the value at address x */
    *x = *y;   /* put y into x */
    *y = temp; /* put x into y */

    return;
}

int main(){

    int a = 100;
    int b = 200;

    /* calling a function to swap the values.
      * &a indicates pointer to a ie. address of variable a and 
      * &b indicates pointer to b ie. address of variable b.
   */
    swap(&a, &b);

    return 0
}

//----------------Call by reference --------------------------

/*
The call by reference method of passing arguments to a function copies the reference of an argument 
into the formal parameter. Inside the function, the reference is used to access the actual argument used in the call. 
This means that changes made to the parameter affect the passed argument.
*/

void swap(int &x, int &y)
{
    int temp;
    temp = x; /* save the value at address x */
    x = y;    /* put y into x */
    y = temp; /* put x into y */

    return;
}

int main()
{

    int a = 100;
    int b = 200;

    swap(a, b);

    return 0
}

/*
By default, C++ uses call by value to pass arguments. In general, this means that code within a function cannot alter 
the arguments used to call the function and above mentioned example while calling max() function used the same method.
*/

int sum(int a, int b = 20)
{
    int result;
    result = a + b;

    return (result);
} 