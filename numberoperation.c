#include<stdio.h>
int main()
/*Here we want to perform operation of any two number                                              // DATE 20.4.23
 there are several operation 
 1. Addition = a*b
 2. subtraction = a-b
 3. Multiplication = a*b
 4. division = a/b */
{
    int a,b;
 printf("Enter the number a\n");
 scanf("%d",&a);
 printf("Enter the number b\n");
 scanf("%d",&b);
 printf("sum of two number%d\n",a+b);
 printf("subtraction of two number%d\n",a-b);
 printf("multiplication of two number%d\n",a*b);
 printf("division of two number%d\n",a/b);
 return 0;

}