#include <stdio.h>
#include <stdlib.h>

int main()
{

  int n;
  printf("Enter the size of array :");
  scanf("%d", &n);

  int *arr = (int *)malloc(n * sizeof(int));
  if (arr == NULL)
  {
    printf("Memory allocation failed.");
    return 1;
  }

  free(arr);

  return 0;
}