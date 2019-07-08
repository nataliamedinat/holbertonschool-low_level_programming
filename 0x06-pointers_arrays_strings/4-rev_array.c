#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 *@a: pointer
 *@n: pointer
 * Return: number of the content.
 */
void reverse_array(int *a, int n)
{
int swap;/**swap the content*/
	int poss;/**almacena la posicion*/

	for (swap = 0; swap < n; swap++)
	/**loop para saber la posicion inicial*/
	{
		poss = a[n - 1];/**Buffer equals to posicion final*/
		a[n - 1] = a[swap];/**Posicion final -'\0' equals to posicion inial*/
		a[swap] = poss;/**Posicion inicial equals to buffer*/
		n--;/**Decrementa porque es un reverse*/
	}



}
