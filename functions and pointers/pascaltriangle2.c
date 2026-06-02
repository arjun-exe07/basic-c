#include <stdio.h>
int main()
{
  int rows;
  printf("Enter number of rows :");
  scanf("%d", &rows);

  for (int n = 0; n < rows; n++)
  {
    for (int r = 0; r <= n; r++)
    {
      if (r == 0 || n == 0)
      {
        printf("1 ");
      }
      else
      {
        int a = 1, b = 1;
        for (int k = 1; k <= r; k++)
        {
          a *= (n - k + 1);
          b *= k;
        }
        printf("%d ", a / b);
      }
    }
    printf("\n");
  }
}