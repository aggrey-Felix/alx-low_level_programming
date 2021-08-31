#include "holberton.h"
/**
*main - prints Holberton
*Return: 0
*/
int main(void)
{
char i[] = "Holberton";
	int j;

	for (j = 0; j < 9; j++)
	{
		_putchar(i[j]);
	}
	_putchar('\n');
	return (0);
}
