#include <stdio.h>
int main()
{
    char string1[10],string2[10];
    int i=0;
    printf("enter any string=");
    while(string1[i]!='\n')
    {
        string1[i]=getchar();
        string2[i]=string1[i];
        i++;
    }
    printf("entered string is=");
    while(string2[i]!='\0')
    {
        putchar(string2[i]);
        i++;
    }
    return 0;
}