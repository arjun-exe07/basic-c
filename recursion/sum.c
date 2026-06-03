#include <stdio.h>

int sum(int n)
{
  if (n == 1)
  {
    printf("1\n");
    return 1;
  }
  return n + sum(n - 1);
}

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num < 1)
    printf("Please enter a positive integer greater than or equal to 1.\n");
  else
  {
    printf("Sum of numbers from 1 to %d is: %d\n", num, sum(num));
  }

  return 0;
}
