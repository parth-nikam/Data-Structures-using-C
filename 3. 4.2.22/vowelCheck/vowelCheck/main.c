//Parth Nikam PRN:- 20070123120 Date - 4th Feb 2022


#include <stdio.h>

int main() {
    
    char ch;
    printf("Enter a Character \n");
    scanf("%c",&ch);
    
    switch (ch) {
        case 'A':
        case 'a':
        printf("The enter character is a Vowel \n %c",ch);
        break;
            
        default:
            printf("The entered character is not a vowel %c",ch);
    }
    
    return 0;
}
