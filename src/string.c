#include "string.h"

size_t str_len(const char* s) {
	if ( s == nullptr ){
		return 0;
	}

	size_t count = 0;
	while ( *(s + count) != '\0') {
		count++;
	}
	return count;
}


void str_cpy(char* d,const char* s) {
	size_t count = 0;
	while (*(s + count) != '\0') {
		*d = *(s + count);
		count++;
		d++;
	}
	*d = '\0'; // Null Terminator @ last index
}