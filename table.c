#include<stdio.h>
int main()                                                                                          // DATE = 18.4.23
{
    int n,i;
    printf("Enter the no. which you want table show\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n" , n , i , n*i);
    }
    return 0;
}    

    
    
    

