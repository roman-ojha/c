#include <stdio.h>
int main()
{
    int stu,sub,n=1,i,j,roll,tm=0,subm;
    printf("enter number of student=");
    scanf("%d",&stu);
    printf("enter the number of subject:");
    scanf("%d",&sub);
    for(i=0;i<stu;i++)
    {
        printf("\nenter roll number:");
        scanf("%d",&roll);
        printf("enter mark of %d subject for roll no. %d\n",sub,roll);
        for(j=0;j<sub;j++)
        {
            printf("\nsubject %d=",n);
            scanf("%d",&subm);
            n++;
            tm=tm+subm;
        }
        printf("Total mark=%d",tm);
    }
    return 0;
}