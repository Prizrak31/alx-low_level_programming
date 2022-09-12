#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: returns 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
