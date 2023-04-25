#include<stdio.h>
int main()
/* find area of circle whose radius input given by user
   formula of area of circle is pi*r*r */

{
    float pi,r;
    printf("Enter the radius r of circle\n");
    scanf("%f",&r);
    pi= 3.14;
    printf("area of circle is %0.2f",pi*r*r);
    return 0;
}
   

