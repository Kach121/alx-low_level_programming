#include "main.h"
/**
 * _isalpha - function is to check if c is a letter, lowercase or uppercase
 * @c: is the int that will be use for argument of the function
 *Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
