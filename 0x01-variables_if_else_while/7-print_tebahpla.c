#include <stdio.h>
/**
 * main - entry point
 * description of our code: write alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
