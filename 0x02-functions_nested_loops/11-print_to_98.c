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
    for (int n = 0; n < 10; n++) 
    {
        for (int count = 0; count < 9; count++)
        {
            int number = n * 10 + count;
            std::cout << number;
            
            if (number < 98) {
                std::cout << ", ";
            }
        }
    }

    return 0;
}
