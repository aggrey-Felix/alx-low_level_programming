#include "holberton.h"
/**
 *more_numbers - from 0-14 x10
 *
 *Description:0-14 x10
 *
 *Return:void
 *
 */
void more_numbers(void)
{
	int j, k;

	j = 0;

	while (j < 10)
	{
		k = 0;

		while (k < 15)
		{
			if (k >= 10)
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
				k++;
		}
		_putchar('\n');
		j++;
	}
}
