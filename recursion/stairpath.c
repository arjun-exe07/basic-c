#include <stdio.h>
// 2 steps max at a time
int ways(int n)
{
  if (n == 1 || n == 2) // if( n == 0) return 1;
    return n;
  return ways(n - 1) + ways(n - 2); //+ ways(n - 3)
}

int main()
{
  int num;
  printf("Enter number of stairs : ");
  scanf("%d", &num);

  printf("The ways for %d stairs are : %d\n", num, ways(num));

  return 0;
}