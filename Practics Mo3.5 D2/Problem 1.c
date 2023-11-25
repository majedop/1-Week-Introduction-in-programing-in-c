#include<stdio.h>

int main()
{
    /*take two integers as input and show who is bigger.
     If they are equal print as it is.*/

    int A,B;
    printf("Enter the two input: ");
    scanf("%d %d",&A,&B);

    if(A>B)
    {
        printf("A is Bigger.");
    }
    else if(A<B)
    {
        printf("B is Bigger.");
    }
    else
    {
        printf("The are equal.");
    }


    return 0;
}
