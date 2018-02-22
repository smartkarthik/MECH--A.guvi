#include<stdio.h>
void main()
{
    int a,b,c,i,sum=0;
    printf("enter the value a \n");
    scanf("%d",&a);
    printf("enter the value b \n");
    scanf("%d",&b);
    printf("enter the value c \n");
    scanf("%d",&c);
    for(i=0;i<a;i++)
    {
        sum=sum+b;
        b=b+c;
    }
    printf("%d",sum);

}
