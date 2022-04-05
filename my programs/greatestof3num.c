#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("\nPlease Enter three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if((n1>n2)&&(n1>n3))
    printf("\nNumber 1 is Greatest %d",n1);
    else if((n2>n1)&&(n2>n3))
    printf("\nNumber 2 is Greatest %d",n2);
    else
    printf("\nNumber 3 is Greatest %d",n3);
    return 0;
}