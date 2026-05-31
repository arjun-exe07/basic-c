#include <stdio.h>
void main()
{
  int length;
  printf("Enter the length of the square :");
  scanf("%d", &length);

  for (int i = 1; i <= length; i++)
  {
    for (int j = 1; j <= length; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
}