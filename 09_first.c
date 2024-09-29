//If cost price and selling price of an item is input through the keyboard, write a program to determine 
//whether the seller has made profit or incurred loss.Also determine how much profit he made or loss he incurred.

#include<stdio.h>
#include<conio.h>
void main(){
    int cost_price, selling_price, profit ,loss ;
    
    printf("Cost Price : ");
    scanf("%d",&cost_price);
    printf("Selling Price : ");
    scanf("%d",&selling_price);

    profit=selling_price-cost_price;
    loss=cost_price-selling_price;

    if(selling_price>cost_price){
        printf("Profit\n");
        printf("Profit Gained: %d",profit);
    }
    else if(selling_price<cost_price){
        printf("Loss\n");
        printf("Loss Accured : %d",loss);
    }
    else{
        printf("No Profit, No Loss");
    }
    
    getch();
}


