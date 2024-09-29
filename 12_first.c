//Take Positive Integer input and tell if it is divisible by 5 and 3.   

#include<stdio.h>
#include<conio.h>
void main(){
    int a ;
    printf("Enter a Value :");
    scanf("%d",&a);

    if(a%5==0 && a%3==0){
        printf("It is Divisible by both 5 and 3");
    }
    else{
        printf("It is not Divisible by both 5 and 3");
    }
    getch();
}