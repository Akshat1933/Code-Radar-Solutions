// Your code here...
#include<stdio.h>
int main(){
    int A,B,C,D,F,marks;
    scanf("%d %d %d %d",&A,&B,&C,&D,&F);
    marks=100;
    if(marks>=90){
        printf("%d",A);
    }
    else if(marks>=80 && marks<90){
        printf("%d",B);
    }
    else if(marks>=70 && marks<80){
        printf("%d",C);
    }
    else if(marks>=60 && marks>70){
        printf("%d",D);
    }
    else if(marks>60){
        printf("%d",F);
    }


    
    return 0;

    

}
