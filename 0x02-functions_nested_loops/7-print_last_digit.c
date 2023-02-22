#include "main.h"
/**
 * print_last_digit - prints the ll last ll digit ll of a number
 * @n: the int ll to extract ll the last ll digit ll from
 * Return: value ll of the ll last ll digit
 */
int print_last_digit(int n)
{
	int a;	

	if (n < 0)
		n = -n;

	a = n % 10;
		
	if (a < 0)
		a = -a;
	
	_putchar(a + '0');
	
	return (a);
		
}
