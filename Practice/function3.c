/*function without argument and with return value*/
#include <stdio.h>
int takenumber()
{
    int i;
    printf("enter a number=");
    scanf("%d",&i);
    return i;
}
int main()
{
    int c;
    c=takenumber();
    printf("entered number is=%d",c);
    return 0;
}
