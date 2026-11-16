#ifndef STRING_H
#define STRING_H

#include <stddef.h> //size_t

// Return len of string using '\0' terminator
size_t str_len(const char* s);

// String Copy 
// points new pointer to that place
void str_cpy(char* dest,const char* source);

// String concatenate
void str_cat(char* dest, const char* source);



#endif