#include<stdio.h>
void my_function() {
   printf("This is a normal function.");
}
void my_callback_function(void (*ptr)()) {
   printf("This is callback function.\n");
   (*ptr)();    //calling the callback function
}
int main() {

   void (*fun_ptr)() = my_function;
   my_callback_function(fun_ptr);

   return 0;
}

/*  Output
This is callback function.
This is a normal function.
*/