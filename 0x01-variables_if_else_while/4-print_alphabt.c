#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		if (ch !== 'q' || ch !== 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
