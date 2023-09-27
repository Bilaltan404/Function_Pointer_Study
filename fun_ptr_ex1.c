#include <stdio.h>

void fun(int a)
{
    printf("sayi : %d\n",a);
}
int main()
{
    void (*fun_ptr)(int) = &fun; // declaration of function pointer
  //If we remove bracket, then the expression “void (*fun_ptr)(int)” 
  //becomes “void *fun_ptr(int)” which is declaration of a function 
  //that returns void pointer. If we remove bracket, then the expression 
  //“void (*fun_ptr)(int)” becomes “void *fun_ptr(int)” which is declaration
  //of a function that returns void pointer.
    (*fun_ptr)(20);
    (*fun_ptr)(40);


    return 0;
}