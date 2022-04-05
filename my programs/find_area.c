#include<stdio.h>
void main()
{
    int ch;
    float radius,side,base,height,length,breadth,area;
    printf("Please Enter your choice:\n");
    printf("1.Circle\n2.Square\n3.Rectangle\n4.triangle\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter the Radius of circle:\n");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        printf("The area of circle is:%f",area);
        break;

        case 2:
        printf("Enter the sides of square:\n");
        scanf("%f",&side);
        area=side*side;
        printf("The area of square is:%f",area);
        break;

        case 3:
        printf("Enter the lenght and breadth of rectangle:\n");
        scanf("%f%f",&length,&breadth);
        area=length*breadth;
        printf("The area of Rectangle is:%f",area);
        break;

        case 4:
        printf("Enter the height and base of triangle:\n");
        scanf("%f%f",&height,&base);
        area=0.5*height*base;
        printf("The area of Triangle is:%f",area);
        break;

    }


}