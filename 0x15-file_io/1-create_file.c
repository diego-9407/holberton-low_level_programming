#include "holberton.h"

/**
 * create_file - creates a file with a descripted content.
 * @filename: the file name
 * @text_content: content to put in the file
 * Return: 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int rtno, counter;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (1);
	}
	rtno = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (rtno < 0)
	{
		return (-1);
	}
	for (counter = 0; text_content[counter]; counter++)
	{}
	write(rtno, text_content, counter);
	close(rtno);
	return (1);
}
