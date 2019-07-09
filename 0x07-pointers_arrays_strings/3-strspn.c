#include "holberton.h"
/**
 * _strspn - length of a prefix substring
 *@s: pointer
 *@accept: pointer
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int count;/**recorre a s*/
	int count2; /**recorre a accept*/
	int les;

	for (count = 0; s[count] != '\0'; count++)
	{
	/**primer contador para s*/
		les = 0;
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
		/**contador para accept*/
			if (accept[count2] == s[count])/**compare both*/
			{/**si accept tiene algo, siga recorriendo*/
				les = 1;
			}
		}
		if (les == 0)
		{
			break;
		}
	}
	return (count);
}
