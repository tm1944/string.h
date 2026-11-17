#include <stdio.h>

#include <string.h>
#include "my_string.h"

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

	char str[] = "Hello world";

	char *p = str_chr(str, 'e');

	printf("%c\n", *p);		  // e
	printf("%s\n", p);		  // ello world
	printf("%td\n", p - str); // 1 (index)

	char *tests[][2] = {
		{"Hello world", "world"},  // Middle
		{"Hello world", "Hello"},  // Beginning
		{"Hello world", "world!"}, // Not found
		{"banana", "ana"},		   // Multiple matches
		{"aaaaa", "aaa"},		   // Repeated characters
		{"abcdef", "abcdef"},	   // Exact match
		{"abcdef", ""},			   // Empty substring
		{"", "abc"},			   // Empty string
		{"", ""},				   // Both empty
		{"abc", "abcd"},		   // Substring longer than string
		{"abcabcabc", "abc"},	   // Multiple occurrences
		{"aabaac", "aac"},		   // Partial match then restart
	};

	int n = sizeof(tests) / sizeof(tests[0]);

	for (int i = 0; i < n; i++)
	{
		const char *str = tests[i][0];
		const char *sub = tests[i][1];

		char *result = str_str(str, sub);
		char *expected = strstr(str, sub);

		printf("Test %d: ", i + 1);

		if ((result == NULL && expected == NULL) ||
			(result != NULL && expected != NULL &&
			 result - str == expected - str))
		{
			printf("PASS\n");
		}
		else
		{
			printf("FAIL (expected index %td, got %td)\n",
				   expected ? expected - str : -1,
				   result ? result - str : -1);
		}
	}
	*/
	char source[] = "once upon a time..", dest[4];
	mem_cpy(dest, source, sizeof dest);
	printf("%s,%lu", dest, sizeof dest);
	return 0;
}
