#include "main.h"

/**
 *create_file - func that creates a file
 *@text_content: text char
 *@filename: filename
 *Return: 1 if fails; otherwise -1 when it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fdir;
	int alphas;
	int output;

	if (!filename)
		return (-1);
	fdir = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdir == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (alphas = 0; text_content[alphas]; alphas++)
		;

	output = write(fdir, text_content, alphas);
	if (output == -1)
		return (-1);
	close(fdir);
	return (1);
}
