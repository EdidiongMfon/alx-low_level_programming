#include "main.h"
/**
 ** _strstr - Entry point
 ** @haystack: input
 ** @needle: input
 ** Return: Always 0 (Success)
 **/
char *_strstr(char *haystack, char *needle)
{
int i, n;
for (i = 0; haystack[i] != '\0'; i++)
{
check = 0;
for (n = 0; needle[n] != '\0'; n++)
{
if (needle[n] == s[i])
{
haystack++;
check = 1;
}
}
