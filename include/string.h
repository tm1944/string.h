#ifndef STRING_H
#define STRING_H

#include <stddef.h> //size_t

// Return len of string using '\0' terminator
size_t str_len(const char *s);

// String Copy
// points new pointer to that place
void str_cpy(char *dest, const char *source);

// String concatenate
void str_cat(char *dest, const char *source);

// string compare
// returns 0 if equal 1 if not
int str_cmp(const char *str1, const char *str2);

// return first occurance of char c in string
char *str_chr(const char *str, int c);

#endif