#include<stdio.h>
void main()
{
int a,b;
printf("ennter a and b values:");
scanf("%d%d\n",&a,&b);
printf("before swapping a and b values:%d",a&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping a and b values:%d",a&b);
}
