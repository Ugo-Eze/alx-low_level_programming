#include <stdio.h>
/**
 * main - Prints out all possible combination of digits from 0 to 9.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');																	putchar(' ');																}
	}
	putchar('\n');
	return (0);
}
