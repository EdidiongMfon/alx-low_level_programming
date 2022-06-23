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
if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
return (1);
else
return (0);
}
