#include<stdio.h>
void main()
{
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("first number:%d\n",a);
    printf("second number:%d",b);
}
