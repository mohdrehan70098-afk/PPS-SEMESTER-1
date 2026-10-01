
#include<stdio.h>
int main()
//write a progrme to check positive,  negative, and zero
{
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d%d%d", &a,&b,&c);
    if(a > b && a > c)
    {
        printf("%d is the gratest", a);
    }
    else if(b > a && b > c )
    {
        printf("%d is the gratest",);
    }
    else
    {
        printf("%d is the gratest", c);
    }
    return 0;

}
