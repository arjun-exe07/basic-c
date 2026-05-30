#include <stdio.h>
int main()
{
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num >= 100 && num <= 999)
  {
    printf("The number is a three-digit number.\n");
  }
  else
  {
    printf("The number is not a three-digit number. Please enter again: ");
    scanf("%d", &num);
  }
  return 0;
}