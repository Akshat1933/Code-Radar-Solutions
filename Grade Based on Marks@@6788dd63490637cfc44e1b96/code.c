#include <stdio.h>

int main() {
    int A,B,C,D,E,F,marks;
     scanf("%d%d%d%d%d%d", &A,&B,&C,&D,&E,&F);

   
    marks = 100;

    if (marks >= 90) {
        printf("A\n");
    }
    else if (marks<=80 && marks>=90) {
        printf("B\n");
    }
    else if (marks <= 70 && marks >= 80) {
        printf("C\n");
    }
    else if (marks <= 60 && marks >= 70) {
        printf("D\n");
    }
    else if (marks >= 50 && marks < 60) {
        printf("E\n");
    }
    else if (marks >= 0 && marks < 50) {
        printf("F\n");
    }
    else {
        
        printf("Invalid marks entered!\n");
    }

    return 0;
}
