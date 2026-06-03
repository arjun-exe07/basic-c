#include <stdio.h>
int fibo(int n, int a, int b)
{
  if (n == 1)
    return a;
  else if (n == 2)
    return b;
  else
    return fibo(n - 1, b, a + b);
  // return fibo(n - 1) + fibo(n - 2); Euler's Tour Tree
}
int main()
{
  int num;
  printf("Enter term for fibonacci series : ");
  scanf("%d", &num);

  printf("The %dth term of fibonacci series is : %d\n", num, fibo(num, 1, 1));

  return 0;
}
