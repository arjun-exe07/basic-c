#include <stdio.h>

void nTo1(int n)
{
  if (n == 1)
  {
    printf("1 ");
    return;
  }
  nTo1(n - 1);
  printf("%d ", n);
  return;
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
    printf("Numbers from 1 to %d: ", num);
    nTo1(num);
    printf("\n");
  }

  return 0;
}