// Take Positive Integer input and tell if it is divisible by 5 or not.

#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    if(n%5==0){
        printf("Divisible By 5");
    }
    else{
        printf("Not Divisible by 5");
    }
    getch();
}