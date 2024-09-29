// If the Ages if ram, shyam and ajay are input through the keyboard, write a program to determine the youngest of them three. Using Nested Loops 

#include <stdio.h>
#include <conio.h>
void main(){

    int ram, shyam, ajay;
    printf("Age of Ram :");
    scanf("%d", &ram);
    printf("Age of Shyam :");
    scanf("%d", &shyam);
    printf("Age of Ajay :");
    scanf("%d", &ajay);

    if (ram<shyam){
        if (ram<ajay){
            printf("Ram is Youngest");
        }
        else{
            printf("Ajay is Youngest");
        }
    }

    else{
        if (shyam<ajay){
            printf("Shyam is Youngest");
        }
        else{
            printf("Ajay is Youngest");
        }
    }
    getch();
}