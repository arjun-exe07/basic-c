#include <stdio.h>
void main()
{
  int length;
  printf("Enter the length of the square :");
  scanf("%d", &length);

  for (int i = 1; i <= length; i++)
  {
    for (int j = 65; j <= 65 + length - 1; j++)
    {
      printf("%c ", j);
    }
    printf("\n");
  }
}