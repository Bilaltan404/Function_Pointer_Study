// Function pointer in Struct

/*A function pointer in C is a technique that empowers the programmer to manage 
the execution order within an application by permitting different functions
 to be executed depending on the application's requirements.
*/
#include<stdio.h>

typedef int (*fun_ptr) (int num_1, int num_2);

typedef struct _str {
    int result;         // to store the result
    fun_ptr function;  // function pointer
} STR;

/*
* Add two numbers a and b 
*/

int add ( int a , int b ){
     
      return a+b ;
}

/*
* Subtract two numbers a and b 
*/

int subtract ( int a , int b ){

       return a-b ;
}

/*
* Multiply two numbers a and b 
*/

int multiply ( int a , int b ){

       return a*b ;
}

int main()
{
    STR str_obj;
    str_obj.function = add; // the function pointer variable point to add function
    str_obj.result = str_obj.function(40,20);
    printf("The result is : %d\n",str_obj.result );

    str_obj.function = subtract; // the function pointer variable point to subtract function
    str_obj.result = str_obj.function(40,20);
    printf("The result is : %d\n",str_obj.result );

    str_obj.function = multiply; // the function pointer variable point to multiply function
    str_obj.result = str_obj.function(40,20);
    printf("The result is : %d\n",str_obj.result );

    return 0;
}

/*      Output
The result is : 60
The result is : 20
The result is : 800
*/