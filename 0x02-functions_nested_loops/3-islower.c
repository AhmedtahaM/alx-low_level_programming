#include"main.h"

/**
 * _is lower - function to check if
 * character is lowercase
 * description: checks input function
 *
 * Return: returns 1 if 'c' is lowercase
 * is always 0 (success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
