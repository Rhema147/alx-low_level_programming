#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Sucees)
 */

int main(void)
{
	char low = 'a';
	char upper = 'A';

	while (low <= 'z') /*lower cases gets printed*/
	{
		putchar(low);
		low++;
	}

	while (upper <= 'Z') /*upper cases gets printed*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
