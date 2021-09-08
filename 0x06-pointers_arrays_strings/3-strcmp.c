#include "main.h"

/**
 *strcmp - Compares pointers to two strings.
 *@s1: A pointer to first string to compare.
 *@s2: A pointer to the second string to compare.
 *
 *Return: If s1 < s2, the negative difference of the first unmatched characters
 *        If s1 == s2, 0.
 *        If s1 > s2, the positive difference of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
  while (*s1 && *s2)
    {
      if (*s1 != *s2)
	return (*s1 - *s2);
      s1++, s2++;
    }
  return (*s1 - *s2);
  
}
