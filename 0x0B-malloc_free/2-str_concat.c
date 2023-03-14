#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
int i, j, k;
char *newStr = NULL;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i] != '\0'; i++)
	;
for (j = 0; s2[j] != '\0'; j++)
	;
newStr = (char *)malloc((i + j) * sizeof(char));

if (newStr == NULL)
	return (NULL);
for (k = 0; s1[k] != '\0'; k++)
	newStr[k] = s1[k];

for (k = 0; s2[k] != '\0'; k++)
	newStr[k + i] = s2[k];

return (newStr);
}
