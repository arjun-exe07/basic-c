#include <stdio.h>

int gcd(int a, int b)
{

  int min = a < b ? a : b;
  for (int i = min; i > 0; i--)
  {
    if (a % i == 0 && b % i == 0)
    {
      return i;
    }
  }
  return 1; // If no common divisor found, return 1
}

int main()
{
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  int result = gcd(num1, num2);
  printf("GCD of %d and %d is: %d\n", num1, num2, result);

  return 0;
}