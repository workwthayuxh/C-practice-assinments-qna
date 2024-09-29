//Take Integer input and print the absolute value of that integer.

#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    if(n<0){
        n=n*(-1);
    }

    printf("Absolute Value is : %d",n);
    
    getch();
}