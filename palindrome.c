#include<stdio.h>
int main(void)
{
    int num,sum=0,r,temp;

    printf("enter any number ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0);
    {
        r=temp%10;
        sum=sum*10+r;;
        temp=temp/10;
    }
    {
         if(num==sum)
            printf("armstrong");
        else
            printf("not armstrong");
    }
    return 0;
}
