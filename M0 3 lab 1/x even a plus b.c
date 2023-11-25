#include<stdio.h>

int main()
{
    int x,a,b;
    printf("Enter the tree numbers: ");
    scanf("%d %d %d",&x,&a,&b);

   int s ,ss;
   s=a+b;
   ss=a-b;

   if(x%2==0 && x!=0)
   {
    printf("%d",s);
   }
   else if(x%2==1 && x!=0)
   {
       printf("%d",ss);
   }
   else{
    printf("error");
   }

    return 0;
}
