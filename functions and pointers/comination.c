#include <stdio.h>

int facorial(int x)
{
  if (x == 0 || x == 1)
  {
    return 1;
  }
  return facorial(x - 1) * x;
}

void main()
{
  int n, r;
  printf("Enter n :");
  scanf("%d", &n);
  printf("Enter r :");
  scanf("%d", &r);
  int result = facorial(n) / (facorial(r) * facorial(n - r));
  printf("Combination is : %d", result);

  return;
}