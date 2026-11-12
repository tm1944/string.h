#include "string.h"

int str_len(char* s) {
	int count = 0;
	char char_cmp = *s;
	while (char_cmp != '\0') {
		count++;
		char_cmp = *(s + count);
	}
	return count;
}