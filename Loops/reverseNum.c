#include <Stdio.h>
void main()
{
  int n, reverse = 0;
  printf("Enter the number to reverse :");
  scanf("%d", &n);

  while (n != 0)
  {
    reverse = reverse * 10 + n % 10; // Append the last digit to the reverse
    n /= 10;                         // Remove the last digit
  }
  printf("Reversed number: %d", reverse);
}