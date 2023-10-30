#include "main.h"
#include <stdio.h>

/**
*errorFile - func that checks if files can be opened
*@file_next: file to
*@file_back: file from
*@argv: argument vector
*Return: nothing
*/
void errorFile(int file_back, int file_next, char *argv[])
{
	if (file_back == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_next == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
*main - func that checks code
*@argv: argument vector
*@argc: argument count
*Return: nothing
*/
int main(int argc, char *argv[])
{
	int file_back, file_next, errClose;
	ssize_t num_chars, output;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_back = open(argv[1], O_RDONLY);
	file_next = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errorFile(file_back, file_next, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_back, buffer, 1024);
		if (num_chars == -1)
			errorFile(-1, 0, argv);
		output = write(file_next, buffer, num_chars);
		if (output == -1)
			errorFile(0, -1, argv);
	}
	errClose = close(file_back);
	if (errClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_back);
		exit(100);
	}
	errClose = close(file_next);
	if (errClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_back);
		exit(100);
	}
	return (0);
}
