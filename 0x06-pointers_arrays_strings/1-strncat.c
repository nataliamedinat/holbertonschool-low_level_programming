#include "holberton.h"
/**
 * _strncat - concatenates two strings
 *@dest: pointer
 *@src: pointer
 *@n: var
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int le; /**dest*/
	int ol; /**src*/

	for (le = 0; dest[le] != '\0'; le++) /*contador para dest*/
	{}
	for (ol = 0; src[ol] != '\0' && ol < n; ol++) /*contador para src*/
		{
		dest[le + ol] = src[ol];
		}
		return (dest);
}
