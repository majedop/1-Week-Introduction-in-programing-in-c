#include<stdio.h>

int main()
{
    /*Write a C program to take two positive integers as input and show the summation, subtraction and
multiplication of those two numbers.*/
    int a;
    int b;
    printf("Enter two number: ");
scanf("%d %d",&a,&b);
    int sum;
    sum= a+b;

    int sub;
    sub= a-b;

    int mul;
    mul=a*b;

    printf("%d %d %d ",sum,sub,mul);

    return 0;
}
