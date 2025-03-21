#include <stdio.h>


int main() {
    char A,a;
    scanf("%c", &A,&a);
    if(A){
        printf("Uppercase");
    }
    else if(a){
        printf("Lowercase");
    } 
    else{
        printf("Not a alphabet");
    }

    return 0;
}

