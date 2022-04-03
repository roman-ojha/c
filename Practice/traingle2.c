#include <stdio.h>
int main()
{
    int i,j,sum,num;
    for(i=1;i<=5;i++)
    {
        num=1;
        sum=0;
        for(j=1;j<=i;j++)
        {
            sum=num*num;
            printf("%d\t",sum);
            num++;
        }
        printf("\n");
    }
    return 0;
}