#include "main.h"
/**
 ** _strncat - a function that concatenates two string
 ** @dest: copy to
 ** @src: copy from
 ** @n: input of max bytes to be used
 ** Return: Always 0 (Success)
 **/
char *_strncat(char *dest, char *src, int n)
{
int i, c;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (c = 0; c < n; c++)
{
dest[i + c] = src[c];
if (src[c] == '\0')
c = n;
}
return (dest);
}
