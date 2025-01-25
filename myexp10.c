#include<stdio.h>
void main()
{
    int sum=121,n=0,rem;
    while(sum>=0){
        rem=sum%10;
        n=n*10+rem;
        sum=sum/10;
        if(n==sum){
            printf("palindrome");
        }
        else{
            printf("not a palindrome");
        }
        }
}
