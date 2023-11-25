#include<stdio.h>

int main()
{
    //Write a C program to take one positive integer as input and print double of it.

    int a,b=2;

    printf("Enter a number: ");
    scanf("%d",&a);

    int sum;
    sum=a*b;

    printf("The double number: %d ",sum);

    return 0;
}
