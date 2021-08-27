#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		if (k != 'q' && k != 'e')
		{
			putchar(k);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
