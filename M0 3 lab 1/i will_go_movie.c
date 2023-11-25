#include<stdio.h>

int main()
{
    //product jodi 600 ar beshi 1000 ar nechy hoy ta hole i will sell it
    int product_price;
    printf("Enter a number: ");
    scanf("%d",&product_price);

    if(product_price >= 600&& product_price < 800)
    {
        printf("I will sell it.");
  }
  else
  {
      printf("I won't sell it.");
  }

  return 0;
}


