#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int counter = 0;
  for (p = environ; *p != NULL  && counter < 10; p++) { /* перебор всех элементов массива */
    printf("%s\n", *p);
    counter++;
  }
  return 0;
}
