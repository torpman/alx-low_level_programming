#include "main.h"

/**
* create_file - This function creates a file
*
* @filename: The name of the file to create
* @content: The content of the file
*
* Return: return 1 on success and -1 on various failures
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nwr;
	int tx_cnt;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (tx_cnt = 0; text_content[tx_cnt] != '\0'; tx_cnt++)
		;

	nwr = write(fd, text_content, tx_cnt + 1);

	close (nwr);

	return (1);	
}
