#include <stdio.h>
/**
 * main - entry point
 * description of our code: write alphabet in lowercase & uppercase
 * Return: always 0
 */
int main(void)
{
	int i, j;


	for (i = 97; i < 123; i++)
	{
	putchar(i);
	}
	for (j = 65; j < 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
