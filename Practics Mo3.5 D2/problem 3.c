#include<stdio.h>

int main()
{
    //Write a C program to take one non-negative integer as input and check if it is even or odd.

    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a%2==1)
    {
        printf("Odd.");
    }
    else
    {
        printf("Even.");
    }

    return 0;
}
