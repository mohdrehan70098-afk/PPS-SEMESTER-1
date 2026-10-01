#include<stdio.h>
int main()
{
    const int userName = 100;
    const int passwrd =  100;
    int username_ip, passwrd_ip;
    printf("Enter userName & password\n");
    scanf("%d%d", &username_ip, &passwrd_ip);
    if(userName == username_ip && passwrd == passwrd_ip)
    {
        printf("user is authorized");

    }
 else
 {


    printf("user is not authorized");

 }
 return 0;
}
