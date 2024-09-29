// Calculating Percentage of 5 Subjects

#include <stdio.h>
#include <conio.h>
void main()
{
    float a, b, c, d, e, Percentage;

    printf("Maths =");
    scanf("%f", &a);
    printf("Chemistry =");
    scanf("%f", &b); 
    printf("Physics =");
    scanf("%f", &c);
    printf("Hindi =");
    scanf("%f", &d);
    printf("English =");
    scanf("%f", &e);

    Percentage = (a + b + c + d + e) / 5;
    printf("Percentage=%f", Percentage);
    getch();
}