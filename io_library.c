#include "io_library.h"
#include <stdio.h>
#include <string.h>

/**
* Reads only the first character that is typed in.
*/
int IO_getChar(char* character){
	int letter;
	int answer;
	*character = (char)fgetc(stdin);
	if(*character == '\n'){
		return 1;
	}
	while((letter = fgetc(stdin))!='\n'){
		answer = letter;
	}
	return 0;
}	

/**
* Reads a string that is typed in.
*/
int IO_getString(unsigned int length, char* character){
	
	fgets(character,length,stdin);
	if(character[0]=='\n'){
		return 1;
	}
	else if(character == 0){	
		return 1;
	}
	else{
		character[strlen(character)-1] = '\0';
		return 0;
	}
}

int main(void){
	
	unsigned int MAX_LENGTH = 10;
	char character[MAX_LENGTH];
	int success;
	printf("Bitte String eingeben: ");
	success = IO_getString(MAX_LENGTH,character);
	if(success == 0){
		printf("Your String is %s.\n",character);
		return 0;
	}
	else{
		printf("Invalid Input.\n");
		return 1;
	}
}
