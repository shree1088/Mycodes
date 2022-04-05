#include<stdio.h>
#include<conio.h>
int main()
{
    float celsius,kelvin,fahrenheit;
    printf("Enter Temprature in celsius:",celsius);
    scanf("%f",&celsius);
    kelvin=celsius+273.15;
    fahrenheit=celsius*(9/5)+32;
    printf("The Temprature in Kelvin is:%f\n",kelvin);
    printf("The Temprature in Fahrenheit is:%f\n",fahrenheit);
    return 0;

}