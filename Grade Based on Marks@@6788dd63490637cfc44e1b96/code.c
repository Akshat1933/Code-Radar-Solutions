// Your code here...
#include<stdio.h>
int main(){
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    if(A>=B && A>=C && A>=D){
        printf("%d",A);
    }
    else if(B>=A && B>=C && B>=D){
        printf("%d",B);
    }
    else if(C>=A && C>=B && C>=D){
        printf("%d",C);
    }
    else{
        printf("%d",D);
    }
    return 0;

    

}
