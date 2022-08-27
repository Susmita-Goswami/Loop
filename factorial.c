#include<stdio.h>
int main(void)
{
    int i,fact=1,n;
    printf("enter your number ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        fact=fact*i;

    }
printf("%d",fact);
    return 0;
}
