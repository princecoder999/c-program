#include<stdio.h>

int main()
{                                                                                                 //DATE  17.4.23
    int a,b,c,d,sum,sub,multi;
    printf("Enter any two digit no\n");
    scanf("%d",&a);
    printf("enter any no three digit no\n");
    scanf("%d",&b);
    printf("Enter any four digit no\n");
    scanf("%d",&c);
    printf("Enter any five digit no\n");
    scanf("%d",&d);
    sum=a+b+c+d;
    sub=a-b-c-d;
    multi=a*b*c*d;
    printf("sum=%d\n",sum);
    printf("sub=%d\n",sub);
    printf("multi=%d\n",multi);
    return 0;
}