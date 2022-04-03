#include <stdio.h>
int main()
{
    int r,c,y;
    r=1;
    printf("multiplication table\n");
    do
    {
        c=1;
        do
        {
            y=r*c;
            printf("%-4d",y);
            c++;
        } while (c<=10);
        printf("\n");
        r++;
    } while (r<=12);
    return 0;
}