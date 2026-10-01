#include<stdio.h>
int main()
{
    int a = -20;
    printf("enter your number");
    scanf("%d",&a);
    if(a == 0 )
    {
        printf("zero");
    }
    else if (a > 0)
    {
        printf("positive");

    }
   else
   {
       printf("negative");
   }
   return 0;
}
