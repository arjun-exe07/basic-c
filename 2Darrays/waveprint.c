#include <stdio.h>
void main()
{

  /*
  Classic output :::
    Enter number of rows :8
    Enter number of columns :5
    Enter elements of the array :
    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
    26 27 28 29 30
    31 32 33 34 35
    36 37 38 39 40

    Array after wave printing :
    1 2 3 4 5
    10 9 8 7 6
    11 12 13 14 15
    20 19 18 17 16
    21 22 23 24 25
    30 29 28 27 26
    31 32 33 34 35
    40 39 38 37 36
  */
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

  printf("Array after wave printing :\n");
  for (int i = 0; i < rows; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < cols; j++)
      {
        printf("%d ", arr[i][j]);
      }
    }
    else
    {
      for (int j = 0; j < cols / 2; j++)
      {
        int temp = arr[i][j];
        arr[i][j] = arr[i][cols - 1 - j];
        arr[i][cols - 1 - j] = temp;
      }

      for (int j = 0; j < cols; j++)
      {
        printf("%d ", arr[i][j]);
      }
    }
    printf("\n");
  }
}