#include <stdio.h>
#include "string.h"

int main(void) {
	char s[] = "Hello World";
	char t[sizeof(s)];
	str_cpy(t, s);

	printf("String Length: %ld\n", str_len(s));
	printf("%ld,%ld\n", str_len(s), str_len(t));
	printf("str 1: %s\nstr 2: %s\n", s, t);
	return 0;
}
