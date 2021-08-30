#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ch;
  for (ch = 'a'; ch <= 'z'; ch++)
    putchar(ch);

  for (ch = 'A'; ch <= 'Z'; ch++)
    putchar(ch);
  putchar('\n');

  return 0;
}

