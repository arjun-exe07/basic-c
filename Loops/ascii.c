#include <stdio.h>
void main()
{
  char c;
  for (c = 65; c <= 90; c++)
  {
    printf("%c -> %d\n", c, c);
  }
}