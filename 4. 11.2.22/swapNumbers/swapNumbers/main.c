//Parth Nikam PRN:- 20070123120 Date - 11th Feb 2022

#include<stdio.h>

void swap_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("\n Swapped first number by value = %i ", a);
    printf("\n Swapped second number by value = %i ", b);
}
void swap_reference(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;
    printf("\n Swapped first number by reference = %i ", *a);
    printf("\n Swapped second number by reference = %i \n", *b);
}

int main() {
    int a, b;
    printf("Enter First number: ");
    scanf("%i", &a);
    printf("Enter Second number: ");
    scanf("%i", &b);
    swap_value(a, b);
    swap_reference(&a, &b);
    return 0;
}

