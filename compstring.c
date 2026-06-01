#include <stdio.h>
#include <stdlib.h>
#include "compstring.h"

char *get_string(char* message){
	if(message != NULL)
	{
		printf("%s",message);
		fflush(stdout);
	}
	int buffer = 128;
	char* word = malloc(buffer);
	if(word == NULL){
		fprintf(stderr,"ERROR: Memory allocation failure\n");
		exit(1);
	}
	int c = 0;

	int k = 0;
	while(1)
	{
		c = getc(stdin);
		if(c == '\n' || c == EOF)
		{
			break;
		}
		else if(k == buffer - 1)
		{
			/* 
			 * Expansion of the string is happening here
			 * the buffer is initially 128 
			 * however if you have a limited memory space you can modify it above
			 * */
			buffer = buffer * 2;
			char *temp = realloc(word,buffer);

			if(temp == NULL)
			{
				fprintf(stderr,"ERROR: Memory allocation failure\n");
				free(word);
				exit(1);
			}
			word = temp;
		}
		word[k++] = c;

	}
	word[k] = '\0';
	return word;
}

void remove_string(char *string){
	free(string);
}
