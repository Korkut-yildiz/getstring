#include "compstring.h"

int main(){
	// how to use the program
	
	// first create a string by initializing a character pointer
	char* foo;

	// then call the get_string function, optionally you can write a message
	foo = get_string("Give me a word:");

	// to test it the program will be using printf
	printf("%s",foo);

	// before exitting DO NOT FORGET to free the string since on the backbone
	// the function uses malloc from <stdlib.h>
	
	free(foo);

	return 0;
}
