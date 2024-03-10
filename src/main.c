//
// Created by Demid Moshkovich 10.03.2024
//


#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

int main() {
	char* str = "   This   is   a   sample   string   with    multiple    words   ";
	char* penultimate_word = get_penultimate_word(str);

	if (penultimate_word != NULL) {
		printf("The penultimate word is: %s\n", penultimate_word);
		free(penultimate_word);
	} else {
		printf("No penultimate word found.\n");
	}

	return 0;
}
