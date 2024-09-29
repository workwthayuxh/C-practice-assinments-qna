//Take 3 numbers input and tell if they can be the sides of a triangle.

#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("Value of 1st side :");
    scanf("%d",&a);
    
    printf("Value of 2nd side :");
    scanf("%d",&b);
    
    printf("Value of 3rd side :");
    scanf("%d",&c);

    if(a+b>c && b+c>a && c+a>b){
        printf("ALL can be the sides of a Triangle");
    }
    else{
        printf("They can't be the side of Triangle");   
    }
    getch();
}