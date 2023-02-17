#include <stdio.h>

/**
 * main - prints all string from 0 to 9
 * followed by a new line
 * Return: Always o (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}
