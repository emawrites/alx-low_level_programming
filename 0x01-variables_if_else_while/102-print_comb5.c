#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int ema1, ema2;

	for (ema1 = 0; ema1 <= 98; ema1++)
	{
	for (ema2 = ema1 + 1; ema2 <= 99; ema2++)
	{
		putchar((ema1 / 10) + '0');
		putchar((ema1 % 10) + '0');
		putchar(' ');
		putchar((ema2 / 10) + '0');
		putchar((ema2 % 10) + '0');

	if (ema1 == 98 && ema2 == 99)
		continue;

	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n')

	return (0);
}
