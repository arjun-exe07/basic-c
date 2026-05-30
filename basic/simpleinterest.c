#include <stdio.h>
int main()
{
  float principal = 1000.0;
  float rate = 5.0;
  int time = 3;

  float simpleInterest = (principal * rate * time) / 100;

  printf("Simple Interest: %.2f\n", simpleInterest);

  return 0;
}