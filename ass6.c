#include<stdio.h>
int main(){
    int T;
printf("please inter temprature\n");
scanf("%d",&T);
if (T<30 && T>0)
{
    printf("please wait for 7 min ");
}
else if (T>30 && T<60)
{
        printf("please wait for 5 min ");
}
else if (T>60 && T<90)
{
        printf("please wait for 3 min ");
}
else if (T>90 && T<100)
{
        printf("please wait for 1 min ");
}
else
printf("Invalid input");

return 0;    
}