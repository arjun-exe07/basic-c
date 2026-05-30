#include <stdio.h>
int main()
{
  int num;
  printf("Enter an number :");
  scanf("%d", &num);

  if (num % 5 == 0 || num % 3 == 0)
  {
    printf("%d is divisible by 5 or 3.\n", num);
  }
  else
  {
    printf("%d is not divisible by 5 or 3.\n", num);
  }
  return 0;
}