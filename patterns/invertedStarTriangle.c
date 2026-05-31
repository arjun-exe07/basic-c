#include <stdio.h>
void main()
{
  /*
  *****
  ****
  ***
  **
  *
  for(int i = 1; i <= length; i++)
  {
    i + j = length + 1
    j = length - i + 1
    for(int j = 1; j <= length - i + 1; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  */
  int length;
  printf("Enter the length of the inverted triangle :");
  scanf("%d", &length);

  for (int i = 1; i <= length; i++)
  {
    for (int j = length; j >= i; j--)
    {
      printf("* ");
    }
    printf("\n");
  }
}