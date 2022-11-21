#include "main.h"

/**
 * read_textfile - Function
 * @filename: Name of the target file
 * @letters: number letters to print
 * Description: Return number of letters
 * Return: Result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *str; 

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	
	if (file == -1)
		return (0);

	str = malloc(sizeof(char) * letters + 1);

	read(file, str, letters);
	str[letters] = '\0';

	dprintf(STDERR_FILENO, "%s", str);

	close(file);
	return (strlen(str));
}
