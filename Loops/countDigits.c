#include <stdio.h>

void main()
{
  // Count digits in a number
  int n, count = 0;
  printf("Enter the number: ");
  scanf("%d", &n);

  while (n != 0)
  {
    n /= 10; // Remove the last digit
    count++; // Increment the count of digits
  }

  printf("Number of digits: %d", count);
}