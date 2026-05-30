#include <stdio.h>
int main()
{
  int x, y;
  printf("Enter the coordinates (x y): ");
  scanf("%d %d", &x, &y);
  if (x == 0 && y == 0)
  {
    printf("The point is at the origin.\n");
  }
  else if (x == 0)
  {
    printf("The point is on the y-axis.\n");
  }
  else if (y == 0)
  {
    printf("The point is on the x-axis.\n");
  }
  else
  {
    printf("The point is in the coordinate plane.\n");
  }
  return 0;
}