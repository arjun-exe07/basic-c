#include <stdio.h>
void main()
{
  int length;
  printf("Enter the length of the inverted triangle :");
  scanf("%d", &length);

  for (int i = 1; i <= length; i++)
  {
    for (int j = 1; j <= length - i + 1; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
}