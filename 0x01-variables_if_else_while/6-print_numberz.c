#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 0-9 using putchar and int variable
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
