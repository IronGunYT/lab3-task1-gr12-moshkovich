//
// Created by Demid Moshkovich 10.03.2024
//


#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

int main(int argc, char* argv[]) {
	if (argc < 2) {
		printf("Usage: %s <string>\n", argv[0]);
		return 1;
	}

	char* str = argv[1];
	printf("The orignal string is: %s\n", str);
	
	char* penultimate_word = get_penultimate_word(str);

	if (penultimate_word != NULL) {
		printf("The penultimate word is: %s\n", penultimate_word);
		free(penultimate_word);
	} else {
		printf("No penultimate word found.\n");
	}

	free(str);
	return 0;
}
