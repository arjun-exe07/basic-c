#include <stdio.h>
void main()
{
  int rows;
  printf("Enter number of rows :");
  scanf("%d", &rows);

  int a = 1;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%d", ++a);
    }
    printf("\n");
  }
  return;
}