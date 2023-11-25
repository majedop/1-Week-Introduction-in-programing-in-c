#include<stdio.h>

int main()
{
    int w;
    printf("Enter the numbers: ");
    scanf("%d",&w);

    if(w%2==0 && w!=2)
    {
        printf("Possible.");
    }
    else {
        printf("Impossible.");

    }
    return 0;
}
