#include <stdio.h>

int facorial(int x)
{
  if (x == 0 || x == 1)
  {
    return 1;
  }
  return facorial(x - 1) * x;
}

int ncr(int n, int r)
{
  if (r == 0 && n == 0)
  {
    return 1;
  }
  return facorial(n) / (facorial(r) * facorial(n - r));
}
void main()
{
  int rows;
  printf("Enter number of rows :");
  scanf("%d", &rows);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", ncr(i, j));
    }
    printf("\n");
  }
}