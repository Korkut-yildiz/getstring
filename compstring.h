#ifndef COMPSTRING_H
#define COMPSTRING_H

#include <stdio.h>
#include <stdlib.h>

// gets a string from stdin dynamically, use remove_string before exitting the program
char *get_string(char* message);

// free's the memory chunk of the string from the memory
void remove_string(char* string);
#endif
