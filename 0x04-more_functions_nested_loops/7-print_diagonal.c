#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal line on the terminal.
 *@n: An input integer
 *Return: Always 0
 */
void print_diagonal(int n)
{
  int i = 0, j;

  if (n > 0)
    {
      for (; i < n; j++)
	{
	  for (j = 0; j < 1; j++)
	    _putchar(' ');
	  _putchar(92);
	  _putchar('\n');
	}
    }
  else
    _putchar('\n');
}
