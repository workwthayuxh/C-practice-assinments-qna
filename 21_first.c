//Given three point (x1,y1) , (x2,y2), (x3,y3), write a program to check if all the three points fall on one straight line.

#include<stdio.h>
#include<conio.h>
void main(){
    double x1,y1,x2,y2,x3,y3,m1,m2;
    printf("Value of x1 :");
    scanf("%lf",&x1);
    printf("Value of y1 :");
    scanf("%lf",&y1);
    printf("Value of x2 :");
    scanf("%lf",&x2);
    printf("Value of y2 :");
    scanf("%lf",&y2);
    printf("Value of x3 :");
    scanf("%lf",&x3);
    printf("Value of y3 :");
    scanf("%lf",&y3);

    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);

    if(m1==m2){
        printf("This is a Straight Line");
    }
    else{
        printf("This isn't a Straight Line");
    }
    getch();
}