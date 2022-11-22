#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,temp,i,k,a;
    printf("Enter a number");
    scanf("%d",&n);
    a=n;
    printf("Armstrong Number = ");
    for(i=1;i<=a;i++)
    {
        temp=i;
        k=i;
        while(k>0)
        {
            r=k%10;
            k=k/10;
            sum=sum+r*r*r;
        }
        if(sum==temp)
        {
            printf("%d ,",sum);
        }
        sum=0;
    }
    getch();
}
