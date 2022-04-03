/*write a c program to find product of two 3*3 matrix.*/
#include<stdio.h>
int main() {
   int a[3][3], b[3][3], c[3][3], i, j, k;
   int sum = 0;
   printf("Enter First Matrix:\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &a[i][j]);
      }
   }

   printf("Enter Second Matrix:\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &b[i][j]);
      }
   }

   printf("The First Matrix is: \n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf(" %d ", a[i][j]);
      }
      printf("\n");
   }

   printf("The Second Matrix is : \n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf(" %d ", b[i][j]);
      }
      printf("\n");
   }
   for (i = 0; i <= 2; i++)
   {
      for (j = 0; j <= 2; j++)
      {
         sum = 0;
         for (k = 0; k <= 2; k++)
         {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }

   printf("Multiplication Of Two Matrices : \n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf(" %d ", c[i][j]);
      }
      printf("\n");
   }

   return (0);
}
