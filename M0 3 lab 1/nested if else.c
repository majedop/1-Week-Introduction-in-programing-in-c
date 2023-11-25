#include<stdio.h>

int main()
{
    //nested if else ar use korar neom
    int a;
    printf("Enter the value of: ");
    scanf("%d",&a);

    if(a==584431)
    {
        printf("Kazi Majedul Islam \n");
        printf("Lakshmipur Polytechnic Institute. \n");

    }
    else if(a==584440)
    {
        printf("Anter Mitra \n");
        printf("Lakshmipur Polytechnic Institute. \n");
    }
    else if (a == 584441)
    {
        printf("Meganta Hajra \n");
        printf("Lakshmipur Polytechnic Institute. \n");
    }
    else
    {
        printf("The value is Error \n");
    }


    return 0;
}
