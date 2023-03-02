#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *leet_arr = "4433007711";
    	char *orig_arr = "aAeEoOtTlL";
    	int i, j;
	
	for (i = 0; str[i]; i++)
	{
	for (j = 0; orig_arr[j]; j++)
	{
	if (str[i] == orig_arr[j])
	{
		str[i] = leet_arr[j / 2];
		break;
	}
	}
	}
	return str;
}
