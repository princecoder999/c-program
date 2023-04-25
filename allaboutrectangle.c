#include<stdio.h>
int main()
/*Here we all discuss all about rectangle                                                            DATE = 19.4.23
  1. Area of rectangle = length * breadth
  2. perimeter of rectangle = 4*(length *breadth)
   where their is side of triangle which are length and breadth*/
   {
    int l,b;
    printf("Enter the value of length of rectangle\n");
    scanf("%d",&l);
    printf("Enter the value of breadth of rectangle\n");
    scanf("%d",&b);
    printf("area of rectangle %d\n",l*b);
    printf("perimeter of rectangle %d",4*(l+b));
    return 0;



   }