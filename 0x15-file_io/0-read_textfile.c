#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stst.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * read-textfile - reads atext file and prints
 * @filename: pointer to a file
 * @letters: number of letters to read and print
 * @Return: actual number it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) *letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, buffer, letters);
	close(fd);
	if (lenr == -1)
	{
		free (buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (len != lenw)
		return (0);
	return (lenw);
}
