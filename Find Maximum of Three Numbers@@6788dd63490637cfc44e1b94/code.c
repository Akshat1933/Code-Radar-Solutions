// Your code here...
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        printf("%d",a);
    }
    else if(a<b){
        printf("%d",b);
    }
    else if(b>c){
        printf("%d",b);
    }
    else if(b<c){
        printf("%d",c);
    }
    else if(c>a){
        printf("%d",a);
    }
    else if(a<a){
        printf("%d",c);
    }
    return 0;
   
}