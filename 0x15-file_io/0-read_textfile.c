#include "main.h"

/**
* read_textfile - This function reads a text to POSIX stdout
*
* @filename: The pointer to the file
* @letters: the number of letters it should print
*
* Return: returns the actual number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nrd, nrw;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	nrd = read(fd, buf, letters);
	nrw = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nrw);
}
