/*break statement*/
#include<stdio.h>
int main()
{
    int n,i,a[4],sum=0,per;
    printf("press 1 and enter to start=");
    first:
    scanf("%d",&n);
    if(n==1)
    {
        printf("enter the mark attained of:\n");
        for(i=0;i<5;i++)
        {
            if(i==0)
            {
                printf("math:\n");
                scanf("%d",&a[0]);
                sum=sum+a[0];
            }
            if(i==1)
            {
                printf("physic:\n");
                scanf("%d",&a[1]);
                sum=sum+a[1];
            }
            if(i==2)
            {
                printf("chemistry:\n");
                scanf("%d",&a[2]);
                sum=sum+a[2];
            }
            if(i==3)
            {
                printf("biology:\n");
                scanf("%d",&a[3]);
                sum=sum+a[3];
            }
            if(i==4)
            {
                printf("english:\n");
                scanf("%d",&a[4]);
                sum=sum+a[4];
            }
        }
        for(i=0;i<5;i++)
        {
            if(a[i]<36)
            {
                printf("your are fail");
            }
        }
        if(a[0]&&a[1]&&a[2]&&a[3]&&a[4]>34)
        {
            printf("your are pass\n");
            per=sum*100/500;
            printf("total=%d\npercentage=%d",sum,per);
        }
    }
    else
    {
        printf("entered number in not include\n");
        printf("press 1 and enter to start=");
        goto first;
    }
    return 0;
}
