#include <stdio.h>
void main()
{
  int n, power;
  printf("Enter the number and its power :");
  scanf("%d %d", &n, &power);
  int result = 1;
  for (int i = 1; i <= power; i++)
  {
    result *= n; // Multiply the current value of result by n
  }
}