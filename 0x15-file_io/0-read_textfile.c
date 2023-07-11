#include "main.h"
#include "string.h"

/**
 *read_textfile - read contents of a textfile and display them
 *@filename: the name of the file to be read
 *@letters: the size of chars to be printed
 *Return: file contents
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_name;
	int i;
	size_t count;
	size_t j;

	file_name = fopen(filename, "r");
	count = 0;

	if (filename == NULL || file_name == NULL)
		return (0);

	for (j = 0; j < letters; j++)
	{
		i = fgetc(file_name);

		if (i == EOF)
			break;

		putchar(i);
		count++;
	}

	fclose(file_name);
	return (count);

}
