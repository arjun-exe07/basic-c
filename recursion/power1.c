#include <stdio.h>

int powerlog(int a, int b)
{
  if (b == 0)
    return 1;

  int ans = powerlog(a, b / 2);
  return b % 2 == 0 ? ans * ans : ans * ans * a;
}

int main()
{
  int num, pow;
  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Enter power: ");
  scanf("%d", &pow);

  printf("power of number %d raised to %d : %d\n", num, pow, powerlog(num, pow));

  return 0;
}
