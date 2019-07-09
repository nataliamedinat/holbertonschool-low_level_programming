#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *@s: pointer
 *@accept: pointer
 * Return: s + era or '\0'
 */
char *_strpbrk(char *s, char *accept)
{
	int era; /*recorre s*/
	int ase; /* recorre accept*/
	int les;

	for (era = 0; s[era] != '\0'; era++)
	{/**Recorre a s*/
		les = 0;
		for (ase = 0; accept[ase] != '\0'; ase++)
		{/**Recorre a accept*/
			if (s[era] == accept[ase])
			{
				les = 1;
			}
		}
			if (les == 1)
			{/**Si hay algun byte return*/
				return (s + era);
			}
	}
	/**si no return null*/
	return ('\0');
}
