#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: file name of text file to be read
 * @letters: is the number of letters it should read and print
 *
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, ssize_t letters)
{
	int fdo, fdr, fdw;
	char *buf;

	if (!filename || letters <= 0)
		return (0);
	fdo = open(filename, O_RDONLY);
	if (fdo == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);
	fdr = read(fdo, buf, letters);
	if (fdr == -1)
	{
		free(buf);
		return (0);
	}
	close(fdo);
	buf[letters] = '\0';
	fdw = write(1, buf, fdr);
	if (fdw != fdr)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (fdw);
}
