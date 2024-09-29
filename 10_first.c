//Given the length and bredth of a rectangle. write a program to find whether the area of the rectangle is greater tha its Perimeter.

#include<stdio.h>
#include<conio.h>
void main(){
    float length , bredth , area , perimeter;
    printf("Value of length :");
    scanf("%f",&length);
    printf("Value of bredth :");
    scanf("%f",&bredth);

    area=length*bredth;
    perimeter=2*(length+bredth);

    printf("Area of Rectangle : %f\n",area);
    printf("Perimeter of Rectangle : %f\n",perimeter);

    if(area>perimeter){
        printf("Area of Rectangle is Greater than its Perimeter");
    }
    else if(perimeter>area){
        printf("Perimeter of Rectangle is Greater than its Area");
    }
    else{       // "==" means similar or equal to
        printf("Area of Rectangle and Perimeter and both Equal");
    }
    getch();    
}