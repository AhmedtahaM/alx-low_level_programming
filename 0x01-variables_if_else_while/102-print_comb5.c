#include<stdio.h>

/**
* main - Entry Point
*
* Description: a program that prints all possible combinations of two digits
*
*Return: 0
*/
int main(void)
{
int firstDigit = 0, seconDigit;

while (firstDigit <= 99)
{
secondigit = firstDigit;
while (seconDigit <= 99)
{
if (seconDigit != firstDigit)
{
putchar((firstDigit / 10) + 48);
putchar((firstDigit % 10) + 48);
putchar(' ');
putchar((seconDigit / 10) + 48);
putchar((seconDigit % 10) + 48);

if (firstDigit != 98 || seconDigit != 99)
{
putchar(',');
putchar(' ');
}}
seconDigit++;
}
firstDigit++;
}
putchar('\n');

return (0);
}
