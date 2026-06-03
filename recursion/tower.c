#include <stdio.h>

void steps(int n, char s, char h, char d)
{
  if (n == 0)
    return;
  steps(n - 1, s, d, h);
  printf("%c -> %c\n", s, d);
  steps(n - 1, h, s, d);
  return;
}

int main()
{
  int num;
  printf("Enter number of disks : ");
  scanf("%d", &num);

  printf("The Three rods are -> source: A, helper : B , Destination : C\n");
  steps(num, 'A', 'B', 'C');

  return 0;
}