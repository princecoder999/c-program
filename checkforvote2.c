#include<stdio.h>
int main()
/*Here we are discussing to write a program about vote for older,
  younger, child and babies.-------THIS IS HYPOTHETICAL SITUATION.*/
  {
    int age;
    Printf("Enter your age:\n");
    scanf("%d",&age);
    printf("you are enter your age as %d year\n",age);
    if(age>=5)
    {
        printf("You are eligible for vote but only for babies/small kids only\n");
    }
    if else(5<age>18)
    {
        printf("You are eligible for vote but only for teenager/children\n");
    }
    if else(18<age>60)
    {
        printf("You are eligible for vote but only for young generations\n");
    }
    if else(60<age>90)
    {
        printf("you are eligible for vote but only for old generation\n");
    }
    else
        printf("you are not eligible");
        return 0;
  }