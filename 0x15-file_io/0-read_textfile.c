#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters) {
    if (!filename) return 0;

    int fd = open(filename, O_RDONLY);
    if (fd < 0) return 0;

    char *buffer = malloc(letters);
    if (!buffer) {
        close(fd);
        return 0;
    }

    ssize_t bytes_read = read(fd, buffer, letters);
    if (bytes_read < 0) {
        close(fd);
        free(buffer);
        return 0;
    }

    for (ssize_t i = 0; i < bytes_read; i++) {
        if (_putchar(buffer[i]) < 0) {
            close(fd);
            free(buffer);
            return 0;
        }
    }

    close(fd);
    free(buffer);

    return bytes_read;
}
