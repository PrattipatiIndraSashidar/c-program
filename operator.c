#include <stdio.h>

int main() {
 int a,b;
 char op;
 printf("enter a and b values and op");
 scanf("%d%d %c",&a,&b,&op);
 switch(op)
 {
     case '+':printf("The addition is %d",a+b);
     break;
     case '-':printf("The subtraction is %d",a-b);
     break;
     case '/':printf("The divition is %d",a/b);
     break;
     case '%':printf("The reminder is %d",a%b);
     break;
    default: printf("invalid operator");
    break;
 }
 }
