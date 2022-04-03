#include <stdio.h>
int main()
{
    int a=5;
    printf("%d\n",&a);
    int *ptr=&a;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    ptr=ptr+1;
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    int array[5]={1,2,3,4,5};
    int *pointer=array;
    printf("%d\n",&array[0]);
    printf("%d\n",*pointer);
    printf("%d\n",pointer);
    printf("%d\n",array);
    return 0;
}