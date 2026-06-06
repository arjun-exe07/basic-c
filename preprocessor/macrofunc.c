#include <stdio.h>
#define PI 3.14159265359
#define area(r) (PI * r * r)

void main()
{
  // 3.141593
  printf("%f", area(10));
}