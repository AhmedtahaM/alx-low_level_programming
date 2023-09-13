#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 * separated by comma. followed
 * by space and number should be
 * printed in order
 *
 * @n: input
 */

void print_to_98(int n)
{       
int n = 0;
for (int i = n ; n > 98 ;n++ )
{
_putchar(',');
_putchar(' '+n);
}

