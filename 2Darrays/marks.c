#include <stdio.h>
void main()
{
  int Students, Subjects;
  printf("Enter Total number of students :");
  scanf("%d", &Students);

  printf("Enter Total number of subjects :");
  scanf("%d", &Subjects);

  int arr[Students][Subjects];
  for (int roll = 0; roll < Students; roll++)
  {
    printf("Roll No. :%d", roll + 1);
    for (int sub_marks = 0; sub_marks < Subjects; sub_marks++)
    {
      printf("Enter Marks for Subject %d : ", sub_marks + 1);
      scanf("%d", &arr[roll][sub_marks]);
    }
    printf("\n");
  }

  printf("Marks of Students :\n");
  for (int roll = 0; roll < Students; roll++)
  {
    printf("Roll No. :%d", roll + 1);
    for (int sub_marks = 0; sub_marks < Subjects; sub_marks++)
    {
      printf("\nMarks for Subject %d : %d", sub_marks + 1, arr[roll][sub_marks]);
    }
    printf("\n");
  }
}