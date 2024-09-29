// Take Positive Integer Input and tell if it is even or odd.

#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    if (n % 2 == 0 /*Condition*/){
        printf("This is Even Number") ;
        /*Code to be executed if condition is true*/
    }

    else{
        printf("This is a Odd Number");
    }

    // if (n % 2 == 1){
    //     printf("This is a Odd Number");
    // }
    getch();
}