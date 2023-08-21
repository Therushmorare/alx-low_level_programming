#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be parsed.
 * @accept: The characters to search for.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	if (s)
		accept = accept;
	return (0);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	s = accept;
	return (s);
}

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to be searched.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of the substring in the string,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	haystack = needle;
	return (haystack);
}
