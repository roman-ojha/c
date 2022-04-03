/*c program to find the factorial of a given number by using recursion*/
#include <stdio.h>
int factorial(int number)
{
    if(number==0||number==1)
    {
        return 1;
    }
    else
    {
        return(number*factorial(number-1));
    }
}
int main()
{
    int num;
    printf("enter the number thet you want to factorial to calculate=");
    scanf("%d",&num);
    printf("factorial of %d is %d\n",num,factorial(num));
    return 0;
}