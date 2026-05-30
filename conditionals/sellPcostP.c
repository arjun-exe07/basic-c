#include <stdio.h>

int main()
{
  float costPrice, sellingPrice;

  printf("Enter the cost price: ");
  scanf("%f", &costPrice);

  printf("Enter the selling price: ");
  scanf("%f", &sellingPrice);

  if (sellingPrice > costPrice)
  {
    printf("Profit of %.2f\n", sellingPrice - costPrice);
  }
  else if (sellingPrice < costPrice)
  {
    printf("Loss of %.2f\n", costPrice - sellingPrice);
  }
  else
  {
    printf("No profit, no loss.\n");
  }

  return 0;
}