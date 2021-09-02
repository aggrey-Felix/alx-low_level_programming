#include "main.h"

/**
 *printing numbers from 0 to 9 excluding 2 and 4
 *
 *description:0-9 except 2 and 4
 *
 *return void
 *
 */
void print_most_numbers(void)
{

  int k;

  for (k = 0; k <= 9; k++)
    {

      if (k != 2 && K != 4)
	{

	  _putchar('0' + k);
	}
    }
  _putchar('\n');
}
