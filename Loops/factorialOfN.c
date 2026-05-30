#include <stdio.h>
void main()
{
  int n, fact = 1;
  printf("Enter number of terms to find their factrial:");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    fact *= i; // Multiply the current value of factorial by i
    printf("%2d Factorial : %d\n", i, fact);
  }
}