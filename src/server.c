//
// Created by Demid Moshkovich 10.03.2024
//


#include "interface.h"
#include <string.h>


/*
* This function returns the penultimate word of a string.
*
* Parameters:
* str - original string
*
* Returns:
* The penultimate word of the string.
*/
char* get_penultimate_word(const char* str) {
	char* pointer = strtok(str, " ");
	char* previous_word = NULL;
	char* current_word = NULL;

	while (pointer != NULL) {
		previous_word = current_word;
		current_word = pointer;
		pointer = strtok(NULL, " ");
	}

	char* penultimate_word = NULL;
	if (previous_word != NULL) {
		penultimate_word = strdup(previous_word);
	}

	delete pointer;
	delete previous_word;
	delete current_word;

	return penultimate_word;
}
