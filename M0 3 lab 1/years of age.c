#include<stdio.h>

int main()
{
    //age ar kaj
    int age;
    printf("Enter the value of age: ");
    scanf("%d",&age);
    if(age<2)
    {
        printf("Infant");
    }
    else if(age <10)
    {
        printf("Child");
    }
    else if(age<20)
    {
        printf("Teenage");
    }
    else if( age<30)
    {
        printf("Adult");
    }
    else
    {
        printf("Old");
    }


   return 0;
}
