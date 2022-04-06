#include "main.h"
#include <stdlib.h>
/**
 *_strdup-produces a copy of the string given as a parameter.
 *@str:string to produced copy.
 *Return:a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 */

char *_strdup(char *str)
{
	int str_size;
	static char *duplicate;
	char *dup_offset;

	if (str == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for duplicate */
	str_size = _strlen(str);
	duplicate = (char *)malloc(sizeof(char) * str_size + 1);
	if (duplicate == NULL)
	{
		return ((char *)NULL);
	}
	/* Copy string */
	dup_offset = duplicate;
	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';

	return (duplicate);
}


/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;
/*incremeant up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
