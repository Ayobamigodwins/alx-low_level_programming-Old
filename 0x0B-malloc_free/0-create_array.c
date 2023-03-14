#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - create array of size size and assign char c
* @size: size of array
* @c: char to assign
* Description: creat array of size size and assign char c
* Return: pointer to array, NULL if fail
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(*s));

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
