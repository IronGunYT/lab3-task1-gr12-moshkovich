//
// Created by Demid Moshkovich 10.03.2024
//


#include "interface.h"
#include <string.h>
#include <stdbool.h>


/*
* This function returns the penultimate word of a string.
*
* Parameters:
* str - original string
*
* Returns:
* The penultimate word of the string.
*/
char* get_penultimate_word(char* str) {
	int len = strlen(str);
	char* prepenultimate_word = NULL;
	bool word_started = false;
	int prev_word_start_index = -1;
	int prev_word_end_index = -1;
	int word_start_index = -1;
	int word_end_index = -1;

	for (int i = 0; i < len; i++) {
		if (str[i] != ' ' && !word_started) {
			word_started = true;
			prev_word_start_index = word_start_index;
			prev_word_end_index = word_end_index;
			word_start_index = i;
		} else if (str[i] == ' ' && word_started) {
			word_end_index = i - 1;
			word_started = false;
		}
	}

	if (word_started) {
		word_end_index = len - 1;
	}

	if (prev_word_start_index != -1) {
		prepenultimate_word = malloc((prev_word_end_index - prev_word_start_index + 2) * sizeof(char));
		strncpy(prepenultimate_word, &str[prev_word_start_index], prev_word_end_index - prev_word_start_index + 1);
		prepenultimate_word[prev_word_end_index - prev_word_start_index + 1] = '\0';
	}

	return prepenultimate_word;
}
