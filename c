#include<stdio.h>
void power(int,int);

void main() 
{
    int b,e;
    printf("Enter the base\n");
    scanf("%d",&b);
    printf("Enter the exponent\n");
    scanf("%d",&e);
    power(b,e);
}

void power(int b,int e)
{
    int power=1;
    while(e>0)
    {
        power=power*b;
        e--;
    }
    printf("The power of the given number is %d",power);
}
