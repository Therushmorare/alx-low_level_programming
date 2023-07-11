#include "main.h"

/**
 *append_text_to_file - adds texts to end of file
 *@filename: name of the file
 *@text_content: text to be appended
 *Return: status code
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file_name;
	int status_code;

	file_name = fopen(filename, "a");
	status_code = -1;

	if (filename == NULL || file_name == NULL)
		return (-1);

	if (text_content == NULL)
		status_code = 1;
	else
	{
		fputs(text_content, file_name);
		status_code = 1;
	}

	fclose(file_name);
	return (status_code);
}
