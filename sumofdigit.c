#include<stdio.h>
int main(void)
{
    int num,temp,r,sum=0;

    printf("enter any number ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=  temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("enter the sum %d ",sum);
    return 0;
}
