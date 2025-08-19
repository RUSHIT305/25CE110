#include<stdio.h>
#include<unistd.h>
void main()
{
    int time_cooldown;
    printf("enter the no of countdown");
    scanf("%d",&time_cooldown);
    if(time_cooldown>0) {
         while(time_cooldown>0){
                sleep(1);
            printf("&d",time_cooldown);
            time_cooldown--;
         }
         }
         else
            printf("invcalid uinput");
    }





