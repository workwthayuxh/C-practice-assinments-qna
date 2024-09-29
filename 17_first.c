//Take Positive Integer input and tell if it is divisible by 5 or 3 and not divisible by 15.   

#include<stdio.h>
#include<conio.h>
void main(){
    int a ;
    printf("Enter a Value :");
    scanf("%d",&a);

    if(a%5==0 || a%3==0){  
        if(a%15!=0){      // "!=" refers to "not equal to"
            printf("It is Divisible by 5 or 3 but not 15");
        }
        else{
            printf("This number is Divisible by 15");
        }
    }
    else{
        printf("It is not Divisible by both 5 or 3");
    }
    getch();
}

// Another Way to do this-----

// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int a ;
//     printf("Enter a Value :");
//     scanf("%d",&a);

//     if((a%5==0 || a%3==0) && a%15!=0){  
//         printf("This number is divisible by 5 or 3 but not 15");
//     }
//     else{
//         printf("It is not Divisible by both 5 or 3");
//     }
//     getch();
// }