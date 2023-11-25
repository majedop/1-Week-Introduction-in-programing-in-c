#include<stdio.h>

int main()
{
    //one non-negative integer as input and print the grade according to that input. The grade system is shown.

 int x;
 printf("Enter a grade: ");
 scanf("%d",&x);

 if(x<=32)
 {
     printf("F");
 }
 else if(x<=39)
 {
     printf("D");
 }
 else if(x<=49)
 {
     printf("C");
 }
 else if(x<=59)
 {
     printf("B");
 }
 else if(x<=69)
 {

// A-,A, A+

     printf("A-");
 }
 else if(x<=79)
 {
     printf("A");
 }
 else if(x<=100)
 {
     printf("A+");
 }
 else
 {
     printf("Code error.");
 }

     return 0;
}
