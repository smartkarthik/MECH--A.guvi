#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,fact=1;
    printf("enter the factorial number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
