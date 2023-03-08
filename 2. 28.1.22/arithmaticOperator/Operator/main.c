//Parth Nikam PRN:- 20070123120 Date - 28st Jan 2022
#include <stdio.h>
int main()
{
    int a, b, sum, diff, mul, div, mod;
    
    a = 9;
    b = 4;
    //Arithmatic Operators
    sum = a+b;
    printf("The sum of a and b is %i \n",sum);
    
    diff = a-b;
    printf("The difference of a and b is %i \n",diff);
    
    mul = a*b;
    printf("The multiplication of a and b is %i \n",mul);
    
    div = a/b;
    printf("The division of a and b is %i \n",div);
    
    mod = a%b;
    printf("The modulus of a and b is %i \n",mod);
    
    //Logical Operators
    int LA, LO, LN;
    
    LA = (a>b)&&(sum>diff);
    printf("The value of LA is %i \n",LA);
    
    LO = (a>b)||(sum>diff);
    printf("The value of LO is %i \n",LO);
    
    LN = !(a<b);
    printf("The value of LN is %i \n",LN);
    
    //Relational Operators
    int RG, RL;
    
    RG = a>b;
    printf("The value of RG is %i \n",RG);
    
    RL = a<b;
    printf("The value of RL is %i \n",RL);
    
    //Unary Operators
    int au, ap, am;
    
    au = -b;
    printf("The value of au is %i \n",au);
    
    ap = ++a;
    printf("The value of ap is %i \n",ap);
    
    am = --a;
    printf("The value of am is %i \n",am);
    
    //Bitwise operators
    
    unsigned int aa, bb, anb, aob;
   
    aa = 7;
    printf("The value of aa is %i \n",aa);
    
    bb = 6;
    printf("The value of bb is %i \n",bb);
    
    anb = aa & bb;
    printf("The value of anb is %i \n",anb);
    
    aob = aa | bb;
    printf("The value of aob is %i \n",aob);
    
    return 0;
}
