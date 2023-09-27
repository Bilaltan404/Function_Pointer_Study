#include <stdio.h>

//Unlike normal pointers, a function pointer points to code, not data.
// Typically a function pointer stores the start of executable code.

void fun(int a)
{
    printf("sayi : %d\n",a);
}

int multiply(int a, int b)
{
  return a*b;
}

void number (int a)
{
  printf(" a sayisi : %d\n",a);
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

    //My example
    int (*multiple_ptr)(int,int) = &multiply;
    printf("%d x %d = %d\n",7,8,(*multiply_ptr)(7,8));

  //A function’s name can also be used to get functions’ address.
  // we have removed address operator ‘&’ in assignment.
  // We have also changed function call by removing *
    void (*number_ptr)(int) = number;  // & removed

    number_ptr(5);                    // * removed
    number_ptr(15);

    return 0;
}