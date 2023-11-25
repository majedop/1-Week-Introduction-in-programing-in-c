#include<stdio.h>

int main()
{
    //X marks in your exam Y bonus marks. you take bonus marks will your number became 100?
  int x,y;
  printf("Enter the Exam mark and bouns mark: ");
  scanf("%d %d",&x,&y);

  if(x+y>=100)
   {
        printf("Yes");
   }
  else
    {
        printf("No");
    }

    return 0;
}
