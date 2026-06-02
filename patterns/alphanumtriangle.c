#include <stdio.h>
void main()
{

  int n;
  printf("Enter the number of rows :");
  scanf("%d", &n);

  /*
    1
    AB
    123
    ABCD
    12345
  */
  int a;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (i % 2 == 0)
      {
        printf("%d", j + 1);
      }
      else
      {
        printf("%c", 65 + j);
      }
    }
    printf("\n");
  }
}