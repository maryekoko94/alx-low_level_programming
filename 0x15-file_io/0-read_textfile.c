#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, r;
ssize_t w;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

r = read(fd, buffer, letters);
if (r == -1)
{
free(buffer);
close(fd);
return (0);
}

/* Add null terminator */
buffer[r] = '\0';

w = write(STDOUT_FILENO, buffer, r);
if (w == -1 || w != r)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (w);
}
