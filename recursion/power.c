#include <stdio.h>

int power(int x, int n)
{
  if (n == 0)
    return 1;
  return x * power(x, n - 1);
}

int main()
{
  int num, pow;
  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Enter power: ");
  scanf("%d", &pow);

  printf("power of number %d raised to %d : %d\n", num, pow, power(num, pow));

  return 0;
}
