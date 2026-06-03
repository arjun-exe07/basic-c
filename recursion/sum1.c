#include <stdio.h>

int sum(int n, int s)
{
  if (n == 0)
    return s;
  return sum(n - 1, s + n);
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
    printf("Sum of numbers from 1 to %d is: %d\n", num, sum(num, 0));
  }

  return 0;
}
