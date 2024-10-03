//WAP to find the greatest of three numbers.

#include<stdio.h>
#include<conio.h>
void main(){
    float a,b,c;

    printf("Enter the Value of A:");
    scanf("%f",&a);

    printf("Enter the Value of B:");
    scanf("%f",&b);

    printf("Enter the Value of C:");
    scanf("%f",&c);

    if(a>b && a>c){
        printf("A is Greatest");
    }

    else if(b>a && b>c){
        printf("B is Greatest");
    }

    
    else if(c>a && c>b){
        printf("B is Greatest");
    }


    getch();
}