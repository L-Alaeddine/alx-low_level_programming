#include "main.h"
/**
 * main - Entry point
 * Description: prints alphabets in lowercase
 * Return: Alaways 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
