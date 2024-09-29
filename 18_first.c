//Take 3 Positive Integer input and print the greatest of them using NESTED LOOPS.

#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("Value of A :");
    scanf("%d",&a);
    printf("Value of B :");
    scanf("%d",&b);
    printf("Value of C :");
    scanf("%d",&c);

    if(a>b){ //if a is bigger then b
        if(a>c){
            printf("A is Greatest");
        }
        else{
            printf("C is Greatest");
        }
    }

    else{    // if b is bigger than a
        if(b>c){
            printf("B is Greatest");
        }
        else{
            printf("C is Greatest");
        }
    }

    getch();
}