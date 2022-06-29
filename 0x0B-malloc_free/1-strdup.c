#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 ** _strdup - duplicate to new memory space location
 ** @str: char
 ** Return: 0
 **/
char *_strdup(char *str)
{
int i = 1, j = 0;
char *array;

if (str == NULL)
return (NULL);
while (str[i])
i++;
array = (char *)malloc(sizeof(char) * i + 1);
if (array == NULL)
return (NULL);
while (j < i)
{
array[j] = str[j];
j++;
}
array[j] = '\0';
return (array);
}
