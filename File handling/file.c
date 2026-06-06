#include <stdio.h>

int main()
{
  FILE *ptr = fopen("data.txt", "r");
  if (ptr == NULL)
  {
    printf("File opening failed.");
    return 1;
  }

  char str[50];
  while (fgets(str, 30, ptr) != NULL)
    printf("%s", str);
  fclose(ptr);

  // writing a  file;
  FILE *ptr2 = fopen("data.txt", "w");
  if (ptr2 == NULL)
  {
    printf("File opening failed.");
    return 1;
  }

  fprintf(ptr2, "This is a new line.\n");
  fputs("This is another line.", ptr2);
  fclose(ptr2);
  return 0;
}