// Take two integer input,a and b:a>b, and find the remainder when a is divisible by b.

#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,q,r;
    printf("Value of a=");
    scanf("%d", &a);
    printf("Value of b=");
    scanf("%d", &b);
    q=a/b;
    r=a-b*q; //reminder= divident-divisor*quotient
    printf("Reminder is :%d",r);
    getch();
}