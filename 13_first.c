//Take Positive Integer input and tell if it is divisible by 5 or 3.

#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("Enter a Value :");
    scanf("%d",&a);

    if(a%5==0 || a%3==0){   // "||" refers to "or"
        printf("This value is Divisible by 5 or 3");
    }
    else{
        printf("This value is NOT Divisible by 5 or 3");
    }
    getch();
} 