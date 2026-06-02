#include <Stdio.h>

void main()
{

  int n;
  printf("Enter odd numbers of rows :");
  scanf("%d", &n);
  if (n % 2 == 0)
    return;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j || j == n - 1 - i)
      {
        printf("* ");
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}