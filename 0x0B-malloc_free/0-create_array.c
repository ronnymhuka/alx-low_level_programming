#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, or NULL if size = 0 or fail
 */

char *create_array(unsigned int size, char c);
{
	char *ptr;
	int i = 0;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	while (size--)
	{
		ptr[i++] = c;
	}

	return (ptr);
}
