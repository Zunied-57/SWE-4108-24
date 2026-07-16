#include<stdio.h>
int main()
{
    int n;
    printf("Enter maximum height : ");
    scanf("%d",&n);
    int hour1=n;
    int hour2=hour1/2;
    int hour3=hour2/2;
    int th1=hour1;
    int th2=th1+hour2;
    int th3=th2+hour3;
    printf("Height after 1st hour : %d\n",th1);
    printf("Height after 2nd hour : %d\n",th2);
    printf("Height after 3rd hour : %d\n",th3);
    return 0;
}