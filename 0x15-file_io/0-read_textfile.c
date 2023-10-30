#include "main.h"

/**
*read_textfile - func that reads a text file and prints it.
*@letters: num of letters printed
*@filename: filename
*Return: if filename is NULL return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int j;
	ssize_t lent, newLent;
	char *tempMemory;

	if (!filename)
		return (0);
	j = open(filename, O_RDONLY);

	if (j == -1)
		return (0);
	tempMemory = malloc(sizeof(char) * (letters));
	if (!tempMemory)
		return (0);
	lent = read(j, tempMemory, letters);
	newLent = write(STDOUT_FILENO, tempMemory, lent);
	close(j);
	free(tempMemory);
	return (newLent);
}
