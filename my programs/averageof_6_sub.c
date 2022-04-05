#include<stdio.h>
int main()
{
    int M3,PL,EDC,TAM,EC,DEM,total,average;
    printf("Please Enter 6 subjects Marks:\n");
    scanf("%d%d%d%d%d%d",&M3,&PL,&EDC,&TAM,&EC,&DEM);
    total=M3+PL+EDC+TAM+EC+DEM;
    average=total/6;
    printf("The average of all your subjects is:%d",average);
    return 0;

}