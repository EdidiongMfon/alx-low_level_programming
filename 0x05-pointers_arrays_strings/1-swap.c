#include"main.h"
/**
 ** swap_int - a function that swaps the values of two integers.
 ** @a: input 1
 ** @e:  input 2
 ** Return: integers
 **/
void swap_int(int *a, int *e)
{
int i;
i = *a;
*a = *e;
*e = i;
}
