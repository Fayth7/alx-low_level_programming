#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, len = 0;
    ssize_t w;
    char *buf;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (len = 0; text_content[len];)
            len++;
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    buf = malloc(sizeof(char) * len);
    if (buf == NULL)
    {
        close(fd);
        return (-1);
    }

    for (int i = 0; i < len; i++)
        buf[i] = text_content[i];

    w = write(fd, buf, len);
    if (w == -1)
    {
        free(buf);
        close(fd);
        return (-1);
    }

    free(buf);
    close(fd);
    return (1);
}
