// Your code here...
#include<stdio.h>
int main(){
    int A,B,C,D,F,marks;
    scanf("%d %d %d %d",&A,&B,&C,&D,&F);
    marks=100;
    if(marks>=90){
        printf(A);
    }
    else if(marks>=80 && marks<90){
        printf(B);
    }
    else if(marks>=70 && marks<80){
        printf(C);
    }
    else if(marks>=60 && marks>70){
        printf(D);
    }
    else{
        printf(F);
    }


    
    return 0;

    

}
