#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter the numbers");
    scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
    b=a*i;
    printf("%d\t",b);
    }
    
    return 0;
}
