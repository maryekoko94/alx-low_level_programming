#include <stdio.h>

/**
 * print_binary - a function that prints the binary representation
 * @n: The number to be printed
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
unsigned int flag = 0, max = 32768; /* 1000 0000 0000 0000 */

if (n == 0)
{
putchar('0');
return;
}
while (max)
{
if (flag == 1 && (n & max) == 0)
putchar('0');
else if ((n & max) != 0)
{
putchar('1');
flag = 1;
}
max >>= 1;
}
}
