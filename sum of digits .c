//sum of digits 
#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter n value ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of digits of number:%d",sum);
    return 0;
}
