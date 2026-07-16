#include<stdio.h>
int main()
{
    int s;
    printf("Enter Total Seconds : ");
    scanf("%d",&s);
    int second=s%60;
    int m=s/60;
    int minute=m%60;
    int h=m/60;
    int hour=m/60;
    printf("Output in required format : %.2d:%.2d:%.2d",hour,minute,second);
    return 0;
}