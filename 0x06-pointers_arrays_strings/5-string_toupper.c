#include "holberton.h"
/**
 * string_toupper - lowercase to uppercase..
 *@min: string
 * Return: min
 */
char *string_toupper(char *min)
{
int pi; /**posicion inicial*/

	for (pi = 0; min[pi] != '\0'; pi++)
	/**Posicion inicial que sea diferente a null y se sume*/
	{
		if (min[pi] >= 97 && min[pi] <= 122)
	/**Si posicion inicial es mayor o igual a 97 y menor o igual a 122 so*/
		{
			min[pi] = min[pi] - 32;
	/**Posicion inicial es igual a si misma diferencia de 32*/
		}
	}
	return (min);/**Retorna el valor*/
}
