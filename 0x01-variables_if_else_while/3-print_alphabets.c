#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;
	char u;

	n: 'a';
	u: 'A';

	while (n <= 'z')
	  {
		  putchar (n);
		  n++;
	  }
	while (u <= 'z')
	   {
		    putchar (u);
		    u++;
	   }
	   putchar ('\n');
	return (0);
}
