// OBJECT Write a program in C language to compute the area and perimeter of a circle

#include <stdio.h>
#include <conio.h>

void main()
{
    float r, pi = 3.1428, area, perimeter;

    printf("Radius=");
    scanf("%f", &r);

    area = pi * r * r;
    perimeter = 2 * pi * r;

    printf("area of circle=%f\n", area);
    printf("permimeter of circle=%f", perimeter);

    getch();
}