#include "main.h"

#define STRING_SIZE 1024
/**
 *main - starting point of prgram that copies content from file a to file b
 *@argc: param 1
 *@argv: param 2
 *Return: files
 */

int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int n;
	char f_len[STRING_SIZE];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		printf("Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((n = read(file_from, f_len, sizeof(f_len))) > 0)
	{
		if (write(file_to, f_len, n) != n)
		{
			printf("Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	if (n == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close(file_from);
	close(file_to);

	return (0);
}
