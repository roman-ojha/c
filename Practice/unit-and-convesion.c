/*c program to convert the one unit to another unit*/
#include <stdio.h>
int main()
{
    int num;
    float unit,a;
    first:
    printf("1=kms to miles\n");
    printf("2=inches to foot\n");
    printf("3=cms to inches\n");
    printf("4=pound to kg\n");
    printf("5=inches to meter\n");
    printf("enter the number form list to calculat that unit=\n");
    scanf("%d",&num);
    printf("enter the number that you want to calculate=\n");
    scanf("%d",&a);
    if(num==1)
    {
        unit=a*0.621;
        printf("%f kms=%f miles\n",a,unit);
    }
    if(num==2)
    {
        unit=a*0.0833;
        printf("%f inches=%f foot\n",a,unit);
    }
    if(num==3)
    {
        unit=a*0.395;
        printf("%d cms=%d inches\n",a,unit);
    }
    if(num==4)
    {
        unit=a*0.454;
        printf("%d pound=%d kg\n",a,unit);
    }
    if(num==5)
    {
        unit=a*0.0254;
        printf("%d inches=%d meter\n",a,unit);
    }
    return 0;
}
