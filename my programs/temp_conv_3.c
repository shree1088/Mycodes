#include<stdio.h>
#include<conio.h>
int main()
{
    float fahrenheit,celsius,kelvin;
    printf("Enter Temprature in Fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    kelvin=(fahrenheit-32)*5/9+273.15;
    printf("The Temprature in Celsius is:%f\n",celsius);
    printf("The Temprature in Kelvin is:%f\n",kelvin);
    return 0;
}