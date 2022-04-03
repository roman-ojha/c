#include <stdio.h>

int main()
{
    int size;
    label:
    printf("Enter the value that how big rectangle you want to make:");
    scanf("%d", &size);
    int count = 0;
    int right, left;
    right = size / 2;
    left = size / 2;
    for (int i = (size / 2); i >0; i--)
    {
        for (int j = 0; j < size; j++)
        {
            if (count == 0)
            {
                if(j==left+1)
                {
                printf("0");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {

                if (j == right)
                {
                    printf("0");
                }
                else
                {
                    printf(" ");
                }
                if (j == left)
                {
                    printf("0");
                }
            }
        }
        right += 1;
        left -= 1;
        count++;
        printf("\n");
    }
    for (int i = (size / 2); i >= 0; i--)
    {
        for (int j = 0; j < size+1; j++)
        {
            if (count == 0)
            {
                if(j==left+1)
                {
                printf("0");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {

                if (j == right)
                {
                    printf("0");
                }
                else
                {
                    printf(" ");
                }
                if (j == left)
                {
                    printf("0");
                }
            }
        }
        right -= 1;
        left += 1;
        count--;
        printf("\n");
    }
    goto label;
    return 0;
}