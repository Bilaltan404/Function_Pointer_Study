//  A simple C program to show function pointers as parameter
#include<stdio.h>

//Like normal data pointers, a function pointer can be passed as an argument
// and can also be returned from a function.

void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }

void wrapper(void (*fun)())
{
    fun();
}

int main()
{

    wrapper(fun1);
    wrapper(fun2);
    return 0;
}