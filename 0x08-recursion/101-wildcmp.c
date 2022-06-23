#include <stdio.h>
#include "main.h"
/**
 ** wildcmp - Entry Point
 ** @s1: input
 ** @s2: input
 ** Return: 0
 **/
int wildcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{					}
if (*s1 == *s2)
return (1);
else
return (0);
}
