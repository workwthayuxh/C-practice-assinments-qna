#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);

    if(n>99 && n<1000){ // "&&" refers to "and" 
        printf("This is a Three Digit Number");
    }
    else{
        printf("This is NOT  a Three digit Number");
    }

    getch();
}