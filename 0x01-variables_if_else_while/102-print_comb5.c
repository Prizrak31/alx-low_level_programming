#include <stdio.h>
/**
 * main -  prints all possible combinations of two two-digit numbers.
 *
 * Return: returns 0 on success
 */
int main(void)
{
	int num1, num2;
	
	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1 ; num2 <= 99 ; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num % 10) + '0');
			putchar(32);
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');

			if (num1 / 10! = 9 || num1 % 10! = 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return(0);
}			
