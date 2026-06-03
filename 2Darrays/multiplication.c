#include <stdio.h>

int main(void)
{
  int r1, c1, r2, c2;

  printf("Enter number of rows for first matrix :");
  scanf("%d", &r1);
  printf("Enter number of columns for first matrix :");
  scanf("%d", &c1);

  int arr1[r1][c1];

  printf("Enter elements of the first array :\n");
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("Enter number of rows for second matrix :");
  scanf("%d", &r2);
  printf("Enter number of columns for second matrix :");
  scanf("%d", &c2);

  int arr2[r2][c2];

  printf("Enter elements of the second array :\n");
  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
  }

  if (c1 != r2)
  {
    printf("Matrix multiplication is not possible");
    return 0;
  }
  int res[r1][c2];
  for (int i = 0; i < r1; i++)
  {
    // c1 : no. of columns in arr1 row
    // r2 : no. of rows for arr2 column
    // c1 = r2
    for (int j = 0; j < c2; j++)
    {
      res[i][j] = 0;
      for (int k = 0; k < c1; k++)
      {
        res[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }
  printf("The Result of two matrix is :\n");
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }

  return 0;
}