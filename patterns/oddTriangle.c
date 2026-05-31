#include <stdio.h>
void main()
{
  /*
  1
  1 3
  1 3 5
  */
  int length;
  printf("Enter the length of the triangle :");
  scanf("%d", &length);

  for (int i = 1; i <= length; i++)
  {

    for (int j = 1; j <= 2 * i - 1; j += 2)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
}