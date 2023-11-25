#include<stdio.h>

int main()
{
    /*three integers as input and show Two bigger numbers.
  If they are equal print as it is.*/

 int A,B,C;
 printf("Enter the tree input: ");
 scanf("%d %d %d",&A,&B,&C);

 if(A>=B && B>=A)
 {
     printf("A and B both are bigger.");
 }
 else if(B>=C && C>=B)
 {
    printf("B and C both are bigger. ");
 }
else
{
    printf("A and c both are bigger.");
}
    return 0;
}
