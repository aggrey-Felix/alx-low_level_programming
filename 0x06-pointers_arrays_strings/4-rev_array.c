#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
int i;
putchar(“Reversed array is : \n”);
for (i = n - 1; i > = 0; i –)
{
putchar(“ % d\n”, a[i]);
}
}
int main(void);
{
int n, *a, i;
scanf(“ % d”, &n);
for (i = 0; i < n; i++)
{
scanf(“ % d”, a + i);
}
reverse(n, a);
return (0);
}
