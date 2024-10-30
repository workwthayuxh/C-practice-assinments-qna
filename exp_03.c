//WAP to calculate the area and circumference of circle.

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){

    float area, circumference, radius, pi=3.14;

    printf("Enter Radius :");
    scanf("%f",&radius);

    area=pi*pow(radius,2);

    circumference=2*pi*radius;

    printf("Area is :%f",area);
    printf("\nCircumference is :%f",circumference);

    getch();
}