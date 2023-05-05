#include <unistd.h>

/**
 * print_char - prints the character c to stdout
 * @c: The character to print
 *
 * Return: Always 0.
 */
void print_char(char c)
{
write(STDOUT_FILENO, &c, 1);
}
