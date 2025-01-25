#include<stdio.h>
void main()
{
    int i,j;
    printf("enter i and j values: ");
    for(i=10;i<20;++i)
    {
        printf("%d\n",i);
        for(j=5;j<i;++j)
        {
            printf("%d\n",j);
        }
    }
    
}
