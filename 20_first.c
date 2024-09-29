#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter Precentage :");
    scanf("%d",&n);

    // more than 80 -> A
    // more than 60 -> B
    // more than 40 -> C
    // Less than 40 -> D

    if(n>80){
        printf("A Grade");
    }
    else if (n>60){
        printf("B Grade");
    }
    else if(n>40){
        printf("C Grade");
    }
    else{
        printf("D Grade");
    }
    getch();
}

// Another way to do this without ESLE IF function ->


#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter Precentage :");
    scanf("%d",&n);

    // more than 80 -> A
    // more than 60 -> B
    // more than 40 -> C
    // Less than 40 -> D

    if(n>80){
        printf("A Grade");
    }
    else{
        if(n>60){
            printf("B Grade");
        }
        else{
            if(n>40){
                printf("C Grade");
            }
            else{
                printf("D Grade");
            }
        }
    }
    getch();
}