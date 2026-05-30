#include <stdio.h>
void main()
{
  int a = 1, b = 1, n, sum;
  printf("Enter the term number :");
  scanf("%d", &n);
  for (int i = 3; i <= n; i++)
  {
    sum = a + b;
    a = b;
    b = sum;
  }

  printf("The %dth term : %d", n, b);
}