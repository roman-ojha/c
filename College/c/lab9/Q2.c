/*write a c program to find transpose of any 2*3 matrix.*/
#include <stdio.h>
int main()
{
    int a[2][3],b[3][2], i, j;
    printf("\nEnter 3*3 matrix elements:\n");
    for (i=0; i < 2; i++)
    {
        for (j=0; j < 3; j++)
        {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEntered 2*3 matrix: \n");
    for (i=0; i <2;i++)
        {
        for (j=0; j <3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        }
    for (i = 0; i < 2; i++)
        {
        for (j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
        }
    printf("\nTranspose of the matrix:\n");
    for (i=0;i<3;i++)
        {
        for (j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
        }
    return 0;
}
