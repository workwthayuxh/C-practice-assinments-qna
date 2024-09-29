// Write a program to compute the intial velocity of a particle

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float v, u, a, s;
    printf("Enter the value of Velocity=");
    scanf("%f", &v);
    printf("Enter the value of Accelaration=");
    scanf("%f", &a);
    printf("Enter the value of Displacement=");
    scanf("%f", &s);

    u = sqrt(v * v - 2 * a * s);
    printf("Initical Velocity=%f", u);
    getch();
}