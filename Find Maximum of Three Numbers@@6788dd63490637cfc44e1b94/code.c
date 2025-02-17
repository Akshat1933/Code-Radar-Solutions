// Your code here...
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        printf("a is maximum");
    }
    else if(b>a){
        printf("b is maximum");
    }
    else if(b>c){
        printf("b is maximum");
    }
    else if(c>b){
        printf("c is maximum");
    }
    else if(a>c){
        printf("a is maximum");
    }
    else if(c>a){
        printf("c is maximum");
    }
    return 0;
   
}