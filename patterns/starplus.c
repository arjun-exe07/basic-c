#include <stdio.h>

void main()
{

  int n;
  printf("Enter odd number of rows :");
  scanf("%d", &n);
  if (n % 2 == 0)
    return;

  int ns = n / 2;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j == ns || i == ns)
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  return;
}