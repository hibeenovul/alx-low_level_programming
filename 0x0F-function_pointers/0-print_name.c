#include "function_pointers.h"

/**
 * print_name - function that print name
 * @name: parameter for name
 * @f: parameter for f
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
