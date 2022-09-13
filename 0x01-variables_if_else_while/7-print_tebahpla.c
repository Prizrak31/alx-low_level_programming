#include <stdio.h>
/**
 * main - prints a to z in reverse
 *
 * Return: o0 on success
 */
int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
