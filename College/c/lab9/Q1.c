/*write a c program to find the square of element on diagonal of square matrix.*/
#include<stdio.h>
int main()
{
    int num[3][3],sqr1,sqr2,i,j;
       printf("Input elements 3*3 matrix:\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element=[%d],[%d] : ",i,j);
	      scanf("%d",&num[i][j]);
      }
  }
    printf("entered 3*3 matrix=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("\nsuare of digonal[%d][%d]=",i,j);
                sqr1=num[i][j]*num[i][j];
                printf("%d",sqr1);
            }
        }
    }
    j=2;
        for(i=0;i<3;i++)
    {
           printf("\nsuare of digonal[%d][%d]=",i,j);
           sqr2=num[i][2-i]*num[i][2-i];
           printf("%d",sqr2);
           j--;
    }
    return 0;
}
