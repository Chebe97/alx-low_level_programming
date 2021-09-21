#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *create_array - A function that creates an array of characters,
 *and initialize it with a specific char.
 *@size: The size of the array
 *@c: A character to initialize the array
 *Return: A pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
  char *s;
  unsigned int i = 0;

  s = malloc(size * sizeof(char));

  if (s == NULL)
    return (NULL);

  if (size == 0)
    return (NULL);

  while (i < size)
    {
      s[i] = c;
      i++;
    }
  return (s);
}
