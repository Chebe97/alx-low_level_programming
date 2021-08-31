#include <unistd.h>
#include "_putchar.c"

/**
 *main - Check description
 *Description: It prints the word Holberton, followed by a new line.
 *
 *Return: 0.
 */

int main()
{
        char word[9] = "Holberton";
        int i;

        for (i = 0; i < 9; i++)
                 _putchar(word[i]);
         _putchar('\n');

	 return (0);
}
