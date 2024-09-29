//Take 3 Positive Integer input and print the greatest of them.

#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("1st Value :");
    scanf("%d",&a);
    printf("2nd Value :");
    scanf("%d",&b);
    printf("3rd Value :");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is Greatest",a);
    }
    
    if(b>a && b>c){
        printf("%d is Greatest",b);
    }
    
    if(c>a && c>b){
        printf("%d is Greatest",c);
    }
    getch();
}