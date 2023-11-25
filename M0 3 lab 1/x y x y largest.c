#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter the two input: ");
  scanf("%d %d",&a,&b);

  if(a>b)
  {
      printf("\n a is large.\n");
  }
    else if(a<b)
    {
        printf("\n b is large.\n");
    }

  else
  {
      printf("\n they are equal. \n");
  }

    return 0;
}
