#include <stdio.h>

void zigzag(int n)
{
  if (n == 0)
    return;
  printf("%d ", n);

  zigzag(n - 1);
  printf("%d ", n);

  zigzag(n - 1);
  printf("%d ", n);
}

int main()
{
  int num, pow;
  printf("Enter a number: ");
  scanf("%d", &num);

  zigzag(num);

  return 0;
}