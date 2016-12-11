#include "io_library.h"
#include <stdio.h>

int IO_getChar(char* character){
	printf("Bitte einen Buchstaben eingeben: ");
	int letter;
	while((letter = fgetc(stdin)) != '\n'){
		if(letter == '\n' || letter == ' '){
			printf("Keine Leer -und Umbuchszeichen.\n");
			return 1;
			//IO_getChar(character);
		}
		else {
			*character = (char)letter;
			return 0;
		}	
	}
	return 1;
}

void IO_getString(unsigned int length, char* character){

}
