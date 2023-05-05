#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int i;
unsigned long int current;
int count = 0;

for (i = 63; i >= 0; i--)
{
current = n >> i;

if (current & 1)
{
putchar('1');
count++;
}
else if (count)
putchar('0');
}
if (!count)
putchar('0');
}
