#include <stdio.h>
	#include "main.h"


	/**
	 * print_to_98 - prints natural numbers between n 98,
	 * Description: followed ll by  ll a new ll line
	 * @n: print ll from ll this ll number
	 */
	void print_to_98(int n)
	{
		int i, j;


		if (n <= 98)
		{
			for (i = n; i <= 98; i++)
			{
				if (i != 98)
					printf("%d, ", i);
				else if (i == 98)
					printf("%d\n", i);
			}
		} else if (n >= 98)
		{
			for (j = n; j >= 98; j--)
			{
				if (j != 98)
					printf("%d, ", j);
				else if (j == 98)
					printf("%d\n", j);
			}
		}
	}

