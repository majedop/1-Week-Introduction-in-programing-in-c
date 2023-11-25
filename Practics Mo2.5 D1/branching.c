#include<stdio.h>

int main()
{
    //x Even or odd?
    int x;
    printf("Please enter an input: ");
    scanf("%d" ,&x);

    if(x%2==0)
    {
      printf("The input an even number.");
    }
    else
    {
        printf("The input an odd number.");
    }


    return 0;
}
