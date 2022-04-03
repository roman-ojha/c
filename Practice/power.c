#include <stdio.h>
int main()
{
    long int pp=1;
    int n;
    double np;
    printf("2 to power n\tn\t2 to power -n\n");
    for(n=0;n<21;n++)
    {
        if(n==0)
        {
            pp=1;
        }
        else
        {
            pp=pp*2;
        }
        np=1.0/(double)pp;
        printf("%d\t\t%d\t%12.12f\n",pp,n,np);
    }
    return 0;
}