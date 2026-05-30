#include <stdio.h>
#include <math.h>
void main()
{
  // G.P. : 100, 50 , 25, ...
  float a = 100, r = 0.5;
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("%.2f ", a * pow(r, i));
  }
}