#include <stdio.h>
void main()
{
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num % 5 == 0)
  {
    if (num % 3 == 0)
    {
      printf("%d is divisible by both 5 and 3.\n", num);
    }
    else
    {
      printf("%d is not divisible by 5 and 3.\n", num);
    }
  }
  else
  {
    printf("%d is not divisible by 5 and 3.\n", num);
  }
}