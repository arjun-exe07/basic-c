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

  int *p = arr;
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", arr);
    arr++;
  }
  arr = p;

  printf("The numbers from 1 to %d are :", n);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *arr);
    arr++;
  }
  free(arr);

  return 0;
}