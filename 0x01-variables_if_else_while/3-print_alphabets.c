#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch, up_ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	for (up_ch = 'A'; up_ch <= 'Z'; ++up_ch)
	{
		putchar(up_ch);
	}
	putchar('\n');
	return (0);
}
