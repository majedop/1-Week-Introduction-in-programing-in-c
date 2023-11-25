#include<stdio.h>

int main()
{
 /*three integers as input and show who is bigger.
  If they are equal print as it is.*/
  int A,B,C;
  printf("Enter the three input:");
  scanf("%d %d %d",&A,&B,&C);

  if(A>B && A>C)
  {
      printf("A is bigger.");
  }
    else if(B>A && B>C)
    {
        printf("B is bigger.");
    }
    else if(C>A && C>B)
    {
            printf("C is bigger.");
    }
    else
    {
        printf("The are equal");
    }


    return 0;
}
