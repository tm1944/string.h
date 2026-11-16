#include "string.h"
#include <stdio.h>
size_t str_len(const char *s)
{
	if (s == NULL)
	{
		return 0;
	}

	size_t count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return count;
}

void str_cpy(char *d, const char *s)
{
	size_t count = 0;
	while (*(s + count) != '\0')
	{
		*d = *(s + count);
		count++;
		d++;
	}
	*d = '\0'; // Null Terminator @ last index
}

void str_cat(char *dest, const char *src)
{
	// dest doesn't have enough space to cat src into it
	// str_cpy dest -> dest2[len(src) + len(dest)]
	char dest2[str_len(dest) + str_len(src)];
	char *d = dest2;
	str_cpy(dest2, dest);

	while (*d != '\0') // get to end of dest
	{
		d++;
	}

	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0'; // end with null terminator

	d = dest2; //point d back to start of dest2;
	str_cpy(dest, d);
}