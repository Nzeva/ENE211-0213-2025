#include <stdio.h>
#include <stdlib.h>

int main()
{int correctpin=5656;
int userpin;
int count=0;
while(count<3)
{
    printf("enter 4 digit pin");
    scanf("%d",&userpin);

    if(userpin<1000||userpin>9999)

    printf("acces denied.enter 4 digit pin");

    else if(userpin==correctpin)
    printf("access granted\n");
    else
    printf("wrongpin.acess denied");

    count++;
    if(count==3&&userpin!=correctpin)
    printf("too many attemps.door locked\n");}
    return 0;
}
