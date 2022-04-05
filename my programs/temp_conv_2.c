#include<stdio.h>
#include<conio.h>
int main()
{
    
    float kelvin,celsius,fahrenheit;
    printf("Enter Temprature in Kelvin:");
    scanf("%f",&kelvin);
    celsius=kelvin-273.15;
    fahrenheit=(kelvin-273.15)*9/5+32;
    printf("The Temprature in Celsius is:%f\n",celsius);
    printf("The Temprature in Fahrenheit is:%f\n",fahrenheit);
    return 0; 
   
}