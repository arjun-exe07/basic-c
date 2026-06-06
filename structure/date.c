#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
  typedef struct date
  {
    int date;
    int month;
    int year;
  } Date;

  Date a = {5, 12, 1999}, b = {5, 12, 2026};

  printf("Date a: %d/%d/%d\n", a.date, a.month, a.year);
  printf("Date b: %d/%d/%d\n", b.date, b.month, b.year);

  bool flag = true;
  if (a.date != b.date)
    flag = false;
  if (a.month != b.month)
    flag = false;
  if (a.year != b.year)
    flag = false;

  if (flag)
    printf("The dates are same");
  else
    printf("The dates are not same");

  return 0;
}