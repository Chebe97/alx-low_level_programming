#include "main.h"
#include <string.h>

/**
 *strncat - Concatenates the string appointed to by @src including the terminating
 *null byte, to the end pof the string pointed to by @desr.
 *@dest: A pointer to the string to be concatenated upon.
 *@src: The source string to be appended to @dest.
 *@n: an input integer
 *
 *Return: A pointer to the destinantion string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
  int srclen = 0, i = 0;
  char *ptr = dest, *start = src;

  while (*src)
    {
      srclen++;
      src++;
    }

  while (*dest)
    dest++;

  if (n > srclen)
    n = srclen;

  src = start;

  for (; i < n; i++)
    *dest++ = *src++;

  *dest = '\0';
  
  return (ptr);
}
