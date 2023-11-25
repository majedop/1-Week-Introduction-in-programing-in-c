#include<stdio.h>

int main()
{
    //x Even or odd?
    int x;
    printf("Please enter an input: ");
    scanf("%d" ,&x);

    if(x%2==0)
    {
      printf("\n The input an even number.\n");
    }
    else
    {
        printf("The input an odd number.");
    }


    return 0;
}
