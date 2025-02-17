#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch)) {
        ch = tolower(ch);
    }
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } 
        else {
            printf("%c is a consonant.\n", ch);
        }
    
    else if (isdigit(ch)) {
        
        printf("%c is a digit.\n", ch);
    } 
    else {
      
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
