#include <stdio.h>
void main()
{
  int nr, nc;
  printf("Enter number of rows :");
  scanf("%d", &nr);
  printf("Enter number of columns :");
  scanf("%d", &nc);

  for (int i = 1; i <= nr; i++)
  {
    for (int j = 1; j <= nc; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}