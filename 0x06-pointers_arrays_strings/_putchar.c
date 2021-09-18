#include <unistd.h>

/**
 *_putchar - writes the character c to stout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
int _puchar(char c)
{
  return (write(1, &c, 1));
}
