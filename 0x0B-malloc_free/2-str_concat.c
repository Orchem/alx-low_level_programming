#include "main.h"
#include "stdlib.h"
/**
 *str_concat-concanates 2 strings.
 *@s1:First string.
 *@s2:second string.
 *Return: Pointer to memory containing concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int size, j, k, size2;
	char *memstorage;

	size = _strlen(s1);
	size2 = _strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
	{
		s2 = "";
	}

/*allocate memory for the full string.*/
	memstorage = malloc(size + size2);
	if (memstorage == NULL)
	{
		return (NULL);
	}

/*copy string one into memory.*/
	for (j = 0; j < size; j++)
	{
		memstorage[j] = s1[j];
	}
/*copy string two into memory.*/
	for (k = 0; k < size2; k++)
	{
		memstorage[j] = s2[k];
		j++;
	}
/*Put null character at the end of the string.*/
	memstorage[++j] = '\0';
	return (memstorage);
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
