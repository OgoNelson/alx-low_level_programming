#include "main.h"

/**
 *append_text_to_file - func that adds text at the end of a file
 *@text_content: text to be added
 *@filename: filename
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j;
	int alphas;
	int output;

	if (!filename)
		return (-1);
	j = open(filename, O_WRONLY | O_APPEND);

	if (j == -1)
		return (-1);
	if (text_content)
	{
		for (alphas = 0; text_content[alphas]; alphas++)
			;
		output = write(j, text_content, alphas);
		if (output == -1)
			return (-1);
	}
	close(j);
	return (1);
}
