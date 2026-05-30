#include <stdio.h>
int main()
{
  int length, breadth;
  float area, perimeter;
  printf("Enter the length of the rectangle: ");
  scanf("%d", &length);
  printf("Enter the breadth of the rectangle: ");
  scanf("%d", &breadth);
  area = length * breadth;
  perimeter = 2 * (length + breadth);

  if (area > perimeter)
  {
    printf("Area is greater than perimeter.\n");
  }
  else if (area < perimeter)
  {
    printf("Perimeter is greater than area.\n");
  }
  else
  {
    printf("Area and perimeter are equal.\n");
  }
}