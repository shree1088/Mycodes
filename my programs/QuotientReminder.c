#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("Please Enter the values of numbers:\t\n");
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a-(b*q);
    printf("The Quotient is:%d\n",q);
    printf("The Reminder is:%d\n",r);
    return 0;
}