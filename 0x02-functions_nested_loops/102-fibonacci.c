#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	init long count, n1, n2, fn;

	n1 = 0;
	n2 = 1;
	for (count = 0; count < 50; count++)
	{

		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		printf("%lf", fn);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(",");
		}
	}
	return (0);
}
