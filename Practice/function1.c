/*to use function with argument and with return value*/
#include <stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,c;
    a=50;
    b=60;
    c=sum(a,b);
    printf("the sum is %d",c);
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}