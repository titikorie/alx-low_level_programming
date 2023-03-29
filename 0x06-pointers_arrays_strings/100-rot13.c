#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @a: pointer to srting params
 *
 * Return: *a
 */

char *rot13(char *a)
{
	int j;
	int i = 0;
	char init[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char fin[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(a + i))
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(a + i) == init[j])
			{
				*(a + i) = fin[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
