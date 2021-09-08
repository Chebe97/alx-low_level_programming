#include "main.h"
#include <string.h>
/**
 *_strcat - a function that concatenates two strings/
 *
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
  char *ptr = dest;

  while (*ptr)
    ptr++;

  while (*src)
    *dest++ = *src++;

  *dest = '\0';
  return (ptr);
}


