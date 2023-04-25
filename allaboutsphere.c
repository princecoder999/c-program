#include<stdio.h>
int main()
/* Here we discuss all about sphere 
   1.  surface area of sphere = 4*pi*r*r                                                              DATE= 19.4.23
   2.  volume of sphere is = 4/3*pi*r*r*r
      where pi=3.14 , r is radius of sphere*/
{
    float pi,r;
    pi = 3.14;
    printf("Enter the value of radius of sphere\n");
    scanf("%f",&r);
    printf("surface area of square is%f \n",4*pi*r*r);
    printf("volume of sphere is%f \n",4/3*pi*r*r*r);
    return 0;

}      
