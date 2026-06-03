#include <stdio.h>

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

  for (int i = 0; i < rows; i++)
  {
    for (int j = i; j < cols; j++)
    {
      // transpose
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
    for (int j = 0; j < cols / 2; j++)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[i][cols - 1 - j];
      arr[i][cols - 1 - j] = temp;
    }
  }
  printf("Array after rotation :\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}