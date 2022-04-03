#include <stdio.h>
int main()
{
    int i,j,num,sum;
    for(i=5;i<=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}