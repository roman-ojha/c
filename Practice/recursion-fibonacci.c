/*c program to find the fibonacci series of nt given term by using recursion*/
#include<stdio.h>
fib(int n)
 {
     if(n==1||n==2)
     {
         return 0||1;
     }
     else
     {
         return fib(n-1)+fib(n-2);
     }
 }
 int main()
 {
     int num;
     printf("enter the nth number to find fibonacci series=");
     scanf("%d",&num);
     printf("%d\t",fib(num-1)+fib(num-2));
     return 0;

 }
