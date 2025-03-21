#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter cp: \n");
    scanf("%d",&cp);
    printf("Enter sp: \n");
    scanf("%d",&sp);
    if(cp < sp){
        printf("Profit");
    }
    else if(cp > sp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }

    



}
