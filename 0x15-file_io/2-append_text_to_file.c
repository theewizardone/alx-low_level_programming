#include "main.h"

/**
 * append_text_to_file - Attaches text in the EOF.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the EOF.
 *
 * Return: If filename is NULL or the function fails - -1.
 *         If  file does not exist , user lacks write permissions - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
