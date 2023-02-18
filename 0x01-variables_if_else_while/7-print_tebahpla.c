#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');
	return (0);
}
