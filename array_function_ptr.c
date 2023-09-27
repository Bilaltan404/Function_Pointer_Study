#include<stdio.h>

//Like normal pointers, we can have an array of function pointers
void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a*b);
}

int main()
{
    // The return types of the functions must all be the same
    void (*fun_ptr_arr[])(int, int) = {add , subtract, multiply};
    int select, number_1 = 10, number_2 = 15;

    printf("Enter choice : 0 for add, 1 for subtract and 2 "
    "for multiply\n");
    scanf("%d",&select);

    if(select > 2) return 0;

    (*fun_ptr_arr[select])(number_1,number_2);

    return 0;
}