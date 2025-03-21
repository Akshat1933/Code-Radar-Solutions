#include <stdio.h>


int main() {
    char ch1,ch2;
    scanf("%c%c", &ch1,&ch2);
    if("A"){
        printf("Uppercase");
    }
    else if("a"){
        printf("Lowercase");
    } 
    else {
        printf("Not a alphabet");
    }

    return 0;
}

