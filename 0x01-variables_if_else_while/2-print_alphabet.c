#include <stdio.h>

/**
 * main - Entry point of the program
 *Description: Prints the lowercase alphabet followed by a newline.
 *              Uses the putchar function for output.
 *              Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = "a"; i < "z"; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
