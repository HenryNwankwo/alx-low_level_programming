#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch, q, e;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		q = (ch == 'q');
		e = (ch == 'e');
		if (q || e)
		{
			continue;
		} else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
