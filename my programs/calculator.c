#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Please Enter Two Numbers:\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("The Addition of Two Numbers is:%d\n",c);
    printf("The Substraction of Two Numbers is:%d\n",d);
    printf("The Multiplication of Two Numbers is:%d\n",e);
    printf("The Division of Two Numbers is:%d\n",f);
    return 0;
}