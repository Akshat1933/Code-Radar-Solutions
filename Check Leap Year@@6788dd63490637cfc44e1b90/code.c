#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    if ((year%400==0) || (year%4==0 && year%100!=0)) {
        printf("Leap Year %d\n", year);
    } 
    else if(year%100==0 && year%400!=0) {
        printf("Not a Leap Year");
    }

    return 0;
}
