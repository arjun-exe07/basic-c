#include <stdio.h>
int main()
{
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num < 0)
  {
    num = -num; // Convert to positive
  }

  printf("The absolute value is: %d\n", num);
  return 0;
}