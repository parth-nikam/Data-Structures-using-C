//Parth Nikam PRN:- 20070123120 Date - 21st Jan 2022
#include <stdio.h>
int main()
{
    int a, b, sum;
    float c, d, diff;
    printf("How are you? \n");
    printf("Enter the value of a: ");
    scanf("%i", &a);
    printf("The value of a is %i \n",a);
    
    printf("Enter the value of b: ");
    scanf("%i", &b);
    printf("The value of a is %i \n",b);
    
    printf("Enter the value of c: ");
    scanf("%f", &c);
    printf("The value of a is %f \n",c);
    
    printf("Enter the value of d: ");
    scanf("%f", &d);
    printf("The value of a is %f \n",d);
    
    sum = a + b;
    printf("The sum of a and b is %i \n", sum);
    
    diff = c - d;
    printf("The diff of c and d is %f \n", diff);
    return 0;
}
