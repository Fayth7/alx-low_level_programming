#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd, n, w;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);
buf = malloc(sizeof(char) * letters);
if (!buf)
{
close(fd);
return (0);
}
n = read(fd, buf, letters);
if (n < 0)
{
free(buf);
close(fd);
return (0);
}
w = 0;
while (w < n)
{
ssize_t m = write(STDOUT_FILENO, buf + w, n - w);
if (m < 0)
{
free(buf);
close(fd);
return (0);
}
w += m;
}
free(buf);
close(fd);
return (w);
}

