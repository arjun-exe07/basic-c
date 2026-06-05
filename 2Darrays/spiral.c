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

  int n = rows * cols;
  int res[n];
  int minr = 0, maxc = cols - 1;
  int maxr = rows - 1, minc = 0; // reversed

  while (minr <= maxr && minc <= maxc)
  {
    // minimum row
    for (int i = minc; i <= maxc; i++)
    {
      printf("%d ", arr[minr][i]);
    }
    minr++;

    // maximum column
    for (int i = minr; i <= maxr; i++)
    {
      printf("%d ", arr[i][maxc]);
    }
    maxc--;

    // maximum row
    for (int i = maxc; i >= minc; i--)
    {
      printf("%d ", arr[maxr][i]);
    }
    maxr--;

    // minimum column
    for (int i = maxr; i >= minr; i--)
    {
      printf("%d ", arr[i][minc]);
    }
    minc++;
  }
}