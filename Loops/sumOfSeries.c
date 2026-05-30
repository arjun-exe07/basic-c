#include <stdio.h>
void main()
{
  // 1,2,3,4,5,6,7,8,9,10, ...,n
  int n, sum = 0;
  printf("Enter the number :");
  scanf("%d", &n);

  // sum = n * (n + 1) / 2; // Using the formula for the sum of the first n natural numbers
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }

  printf("Sum of the series: %d", sum);

  // 1 -2 +3 -4 +5 -6 +7 -8 +9 -10 + ... + n
  sum = 0; // Reset sum for the new series
           /*
             sum = -n / 2; // If n is even, the sum will be negative half of n
             if (n % 2 != 0)
             {
               sum += n; // If n is odd, add n to the sum
             }
         
           */

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      sum -= i;
    }
    else
    {
      sum += i;
    }
  }
  printf("Sum of the alternating series: %d", sum);
}