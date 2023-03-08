//Parth Nikam PRN:- 20070123120 Date - 18th Feb 2022

#include <stdio.h>
struct student {
char name[50];
int roll;
int DOB; //DDMMYYYY
} s;
int main() {
    printf("Enter data: \n");
    printf("Enter name:");
    fgets(s.name, sizeof(s.name), stdin);
    
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf( "Enter DOB:");
    scanf("%d", &s.DOB);
    
    printf ("Displaying data: \n");
    printf("Name:");
    printf("%s",s.name);
    
    printf("Roll number: %.1d\n",s.roll);
    printf ("DOB: %.1d\n", s.DOB);
    return 0;
    }
