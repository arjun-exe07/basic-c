#include <stdio.h>
#include <stdlib.h>

// leetcode : 867. Transpose Matrix

/*

  int **transpose(int **matrix, int matrixSize, int *matrixColSize, int *returnSize, int **returnColumnSizes)
  {
    int M = matrixSize;
    int N = *matrixColSize;

    *returnSize = N;
    *returnColumnSizes = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
      (*returnColumnSizes)[i] = M;
    }

    int **transposed = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++)
    {
      transposed[i] = (int *)malloc(M * sizeof(int));
    }

    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < M; j++)
      {
        transposed[i][j] = matrix[j][i];
      }
    }
    return transposed;
  }

*/

void main()
{
  int rows, cols;
  printf("Enter number of rows :");
  scanf("%d", &rows);

  printf("Enter number of columns :");
  scanf("%d", &cols);

  int arr[rows][cols];
  printf("Enter elements of the array :\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Array after transpose :\n");
  for (int i = 0; i < cols; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      printf("%d ", arr[j][i]);
    }
    printf("\n");
  }
}