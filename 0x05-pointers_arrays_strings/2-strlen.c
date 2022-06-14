#include "main.h"
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
_putchar(ring);
return (0);
}
