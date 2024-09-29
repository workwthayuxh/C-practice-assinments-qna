//If the Ages if ram, shyam and ajay are input through the keyboard, write a program to determine the youngest of them three.

#include<stdio.h>
#include<conio.h>
void main(){
    int ram, shyam,ajay;    
    printf("Age of Ram :");
    scanf("%d",&ram);
    printf("Age of Shyam :");
    scanf("%d",&shyam);
    printf("Age of Ajay :");
    scanf("%d",&ajay);

    if(ram<shyam && ram<ajay){
        printf("Ram is Youngest");
    }

    if(shyam<ram && shyam<ajay){
        printf("Shyam is Youngest");
    }

    if(ajay<ram && ajay<shyam){
        printf("Ajay is Youngest");
    }

    getch();

}