// Your code here...
#include <stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    #include <stdio.h>

int main() {
    // Declare variables to store the three numbers
    int num1, num2, num3;

    // Take input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers and find the maximum
    if (num1 >= num2 && num1 >= num3) {
        printf("The maximum number is: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("The maximum number is: %d\n", num2);
    }
    else {
        printf("The maximum number is: %d\n", num3);
    }

    return 0;
}

    
        
        

    
    
    return 0;
   
}