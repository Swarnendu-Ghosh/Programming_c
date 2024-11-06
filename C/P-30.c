//Write a program in c to demonstrate all the types of error part 1.
#include<stdio.h>
int main()//Linker Error.Expected line is int main()
{
    int a,b,c;
    printf("%d",a);//Syntax Error.Expected line is printf("%d",a);
    c=a*b;//Semantic Error.Expected line is c=a*b;
}