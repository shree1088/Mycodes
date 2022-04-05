#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp,amount;  //declare the variables
    printf("Enter the cost price of car:");
    scanf("%d",&cp);
    printf("enter the selling price of car:");
    scanf("%d",&sp);
    if(sp>cp)
    {
        amount=sp-cp;                     /*for Profit*/
        printf("Profit=%d",amount);
    }
    else if(cp>sp)
    {
        amount=cp-sp;                      /*for loss*/
        printf("loss=%d",amount);
    }
    else
    {
        printf("No profit no loss\n");
    }
    return 0;

}
