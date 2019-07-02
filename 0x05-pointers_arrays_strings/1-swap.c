#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 *@a: value
 *@b:value
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{

	int ValA, ValB;

	ValA = *a;
	ValB = *b;

	*a = ValB;
	*b = ValA;
}

