#include "main.h"

/**
 *create_file - create file
 *@filename: name of file
 *@text_content: content of the file
 *
 *Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file_name;

	file_name = fopen(filename, "w+");

	if (filename == NULL || file_name)
		return (-1);

	if (text_content == NULL)
		return (-1);

	fputs(text_content, file_name);

	fclose(file_name);

	return (1);
}
