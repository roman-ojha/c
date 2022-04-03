#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {4, 5, 6, 7, 8};
    int c[10];
    int n1 = 5, n2 = 5;
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        int check = 0;
        for (int j = 0; j < n2; j++)
        {
            if (a[i] != b[j])
            {
                check++;
            }
        }
        if (check == 5)
        {
            c[count] = a[i];
            count++;
        }
    }
    printf("The difference of the given set is:");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}