#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *strncpy - Copies a string poimted to
 *
 *@dest: A buffer to copy string to.
 *@src: The source string to copy.
 *@n: an input integer
 *Return: A pointer to the destinantion string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
  int srclen = 0, i = 0;
  char *ptr = dest, *start = src;

  while (*src)
    {
      srclen++;
      src++;
    }
  
  srclen++;

  if (n > srclen)
    n = srclen;

  src = start;

  for (; i < n; i++)
    *dest++ = *src++;

  return (ptr);
  
}
