#include <stdio.h>
#include "my_string.h"
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

	d = dest2; // point d back to start of dest2;
	str_cpy(dest, d);
}

int str_cmp(const char *str1, const char *str2)
{
	size_t string_len = str_len(str1); // saves a few calls
	if (string_len != str_len(str2))
	{
		return 1;
	}

	// same len so i can just use the lenght of 1
	for (size_t i = 0; i <= str_len(str1); ++i, ++str1, ++str2)
	{
		if (*str1 != *str2)
		{
			if (*str1 < *str2)
			{
				return -1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

char *str_chr(const char *str, int ch)
{
	const char *s = str;
	while (*s != '\0')
	{
		if (*s == ch)
		{
			return (char *)s;
		}
		s++;
	}
	return NULL;
}

char *str_str(const char *str, const char *sub_str)
{
	if (str_len(sub_str) == 0)
	{
		return (char *)str;
	}
	// increament *str until *str == *sub_str (first char are the same)
	// then we do a sliding window technique
	while (*str != '\0')
	{
		// if *str is starter of *sub_str
		// make 2 pointers to check if they are the same
		if (*str == *sub_str)
		{

			size_t sub_str_len = str_len(sub_str);
			size_t cnt = 0;

			const char *s = str;
			const char *ss = sub_str;

			while (cnt < sub_str_len)
			{
				if (*s != *ss)
				{
					break;
				}

				s++;
				ss++;

				cnt++;
			}
			if (cnt == sub_str_len)
			{
				return (char *)str;
			}
		}
		str++;
	}

	return NULL; // substring not in string
}

void *mem_cpy(void *restrict dest, void *restrict src, size_t n)
{
	// using unsigned char* because void ptr can't be dereferenced
	//
	unsigned char *d = dest;
	unsigned char *s = src;

	size_t cnt = 0;
	while (cnt < n)
	{
		*d = *s;
		d++;
		s++;
		cnt++;
	}
	return dest;
}