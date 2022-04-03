#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <alloca.h>
#include <stdlib.h>
// #include <graphics.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "a+");
    fputs("This is the testing string to put in file ", ptr);
    fclose(ptr);
    ptr = fopen("file.txt", "r");
    char str[100];
    fgets(str, 100, ptr);
    printf("hellow %s\n", str);
    fclose(ptr);
    return 0;
}