#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 *main - Entry point
 * 
 *Return: Always 0 (Success)
 */

int main()
{
  char low;

  for (low = 'z'; low >= 'a'; low--)
    putchar(low);
    putchar('\n');

    return (0);
}