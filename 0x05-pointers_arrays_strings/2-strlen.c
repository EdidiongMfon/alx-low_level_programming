#include "main.h"
#include "stdio.h"
/** _puts a function that prints a string
 ** @s: string input
 ** Return: string
 **/
int _strlen(char *s)
{
char *str;
int ring;
str = "My first strlen!";
ring = _strlen(str);
printf("%d\n", ring);
return (0);
}
