#include "main.h"

/**
 * print_last_digit - Start Point
 *
 * Return: The last digit of a number
 *
 * @x: The int
 */
int print_last_digit(int x)
{
int i = x % 10;

if (x < 0)
{
x = -x;
}
if (i < 0)
{
i = -i;
}
_putchar(i + '0');
return (i);
}
