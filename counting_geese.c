#include<stdio.h>
int main()
{
    int geese;
    printf("Enter initial geese count : ");
    scanf("%d",&geese);
    int g1,g2,g3;
    g1=geese+(13*geese+1)/2;
    printf("After 1st year : %d\n",g1);
    g2=g1+(13*g1+1)/2;
    printf("After 2nd year : %d\n",g2);
    g3=g2+(13*g2+1)/2;
    printf("After 3rd year : %d\n",g3);
    return 0;
}