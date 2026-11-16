#include <stdio.h>
#include "string.h"

int main(void)
{
	/*
	char s[] = "Hello World";
	char t[sizeof(s)];
	str_cpy(t, s);

	printf("String Length: %ld\n", str_len(s));

	printf("str 1: %s\nstr 2: %s\n", s, t);

	char s[] = "Hello ";
	char t[] = "World!";

	printf("s: %s\nt: %s\n", s, t);
	str_cat(s, t);
	printf("s: %s\nt: %s\n", s, t);

	char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
	int result;

	// comparing strings str1 and str2
	result = str_cmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);

	result = str_cmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);
	*/
	char str[] = "Hello world";

	char *p = str_chr(str, 'e');

	printf("%c\n", *p);		  // e
	printf("%s\n", p);		  // ello world
	printf("%td\n", p - str); // 1 (index)
	return 0;
}
