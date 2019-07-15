#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name
 *@argc: arguments counter
¨*@argv: string
 * Return:  0.
 */
int main(int argc, char *argv[])
{
	int a, b, rest;

	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		rest = a * b;
		printf("%d\n", rest);

	}
		return (0);

}
