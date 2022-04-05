#include<stdio.h>
void main()
{
    int num;
    printf("Please Enter a Number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d is a Even Number:",num);
    else
    printf("%d is a Odd Number:",num);
}