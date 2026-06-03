#include <stdio.h>
// we can move only right(R) and down(D)
int mazeways(int a, int b)
{
  if (a == 1 && b == 1)
    return 1;
  if (a == 1 || b == 1)
    return 1;

  return mazeways(a - 1, b) + mazeways(a, b - 1);
}

int main()
{
  int rows, columns;
  printf("Enter rows: ");
  scanf("%d", &rows);

  printf("Enter columns: ");
  scanf("%d", &columns);

  printf("The ways for %d * %d quadrilateral to reach last place : %d\n", rows, columns, mazeways(rows, columns));

  return 0;
}
