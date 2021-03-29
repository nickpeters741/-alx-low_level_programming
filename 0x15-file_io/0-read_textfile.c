#include "holberton.h"

/**
  * read_textfile - Reads a text file and prints it to the standard output
  * @filename: The name of the file to read
  * @letters: Number of letters it should read and print
  *
  * Return: Number of letters it could print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, check, len = 0;
	char *buff;

	buff = malloc(sizeof(letters) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	check = read(fd, buff, letters);
	if (check == -1)
		return (0);

	len = write(1, buff, check);
	if (len = -1)
		return (0);

	close(fd);
	return (len);
}