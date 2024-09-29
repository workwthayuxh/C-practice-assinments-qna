// Write a Program to display area of circle with given radius.

#include <stdio.h>
#include <conio.h>
void main()
{
    float r, area, pi = 3.1428;

    printf("Radius=");
    scanf("%f", &r);

    area = pi * r * r;

    printf("Area of CIRCLE=%f", area);
    getch();
}