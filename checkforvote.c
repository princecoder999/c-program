#include<stdio.h>
int main()
/*Here we discuss about right age for vote                                                       \\Date-25th,april, 2022
  according to indian constitution                                                                
if your age 18 year or above you are eligible for vote
if you are lesser then 18 year then you are not eligible for vote. */
{
    int age;
    printf("Enter your age :\n");
    scanf("%d",&age);
    printf("you age is %d year\n",age);
    if(age>=18)
    {
        printf("you are eligible for vote in india");
    }
    else
    {
        printf("sorry!, you are not eligible for vote");
    }
    return 0;
}