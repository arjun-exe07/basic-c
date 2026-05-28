#include <stdio.h>
int main()
{

  /*
   ***************
   ******* *******
   ******   ******
   *****     *****
   ****       ****
   ***         ***
   **           **
   *             *
   */
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  int nst = n - 1;
  int nsp = 1;

  for (int i = 1; i <= 2 * n - 1; i++)
  {
    printf("*");
  }
  printf("\n");

  for (int i = 1; i <= n - 1; i++)
  {
    for (int s = 1; s <= nst; s++)
    {
      printf("*");
    }
    for (int j = 1; j <= nsp; j++)
    {
      printf(" ");
    }
    for (int s = 1; s <= nst; s++)
    {
      printf("*");
    }
    nsp += 2;
    nst--;
    printf("\n");
  }

  return 0;
}