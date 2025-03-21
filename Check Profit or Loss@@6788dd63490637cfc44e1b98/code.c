#include<stdio.h>
int main()
{
    int costprice,sellingprice;
    printf("Enter cost price: \n");
    scanf("%d",&cost price);
    printf("Enter selling price: \n");
    scanf("%d",&selling price);
    if(cost price < selling price){
        printf("Profit");
    }
    else if(cost price > selling price){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }

    



}
