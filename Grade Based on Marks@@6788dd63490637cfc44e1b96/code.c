// Your code here...
#include<stdio.h>
int main(){
    int A,B,C,D,F,marks;
    scanf("%d %d %d %d",&A,&B,&C,&D,&F);
    marks=100;
    if(marks>=90){
        printf("A");
    }
    else if(marks>=80){
        printf("B");
    }
    else if(marks>=70){
        printf("C");
    }
    else if(marks>=60){
        printf("D");
    }
    else if(marks<60){
        printf("F");
    }


    
    return 0;

    

}
