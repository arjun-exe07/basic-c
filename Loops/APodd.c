#include <stdio.h>
void main()
{
  // A.P. : 1, 3, 5, 7, 9, ...
  int n, a = 1, d = 2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a + i * d);
  }
}