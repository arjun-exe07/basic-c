#include <Stdio.h>
void main()
{
  // Prime number
  int n, isPrime = 1;
  printf("Enter the number to check if the number is prime :");
  scanf("%d", &n);

  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      printf("%d is not a prime number", n);
      isPrime = 0;
      break;
    }
  }
  if (isPrime == 1)
  {
    printf("%d is a prime number", n);
  }
}