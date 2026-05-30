#include <stdio.h>
int main()
{
  // Factorial of a number
  int n, factorial = 1;
  printf("Enter the number to find its factorial :");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    factorial *= i; // Multiply the current value of factorial by i
  }
  printf("Factorial of %d is: %d", n, factorial);
  return 0;
}