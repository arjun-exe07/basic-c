#include <stdio.h>
#include <ctype.h>
#define PI 3.14159265359
#define area(r) (PI * r * r)

void main()
{
  // 3.141593
  printf("%f\n", area(10));

  printf("%d", isdigit(12));
}
