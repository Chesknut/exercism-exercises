/*
    1. Store length of phrase in var - check
    2. Create acronym character array (string) - check
    2. For loop to iterate through each character in input phrase (until length) - at each iteration: - check
		a. Check if the iteration (character) is a space: - check
            i. Yes: Get the character after the space (i+1) and UPPER CASE and CONCATENATE it to the acronym
	3. Return modified acronym variable - check
*/

#include "acronym.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void append(char* charArr, char character) {
        int len = strlen(charArr);
        charArr[len] = character;
        charArr[len+1] = '\0';
}

char *abbreviate(const char *phrase) {
    if (phrase == NULL || phrase[0] == '\0')
        return NULL;

    int phraseLength = strlen(phrase);
    char * acronym = calloc(phraseLength+1, 1);

    append(acronym, toupper(phrase[0]));

    for (int i = 0; i < phraseLength; i++) {
        if (phrase[i] == ' ' || phrase[i] == '-') {
            append(acronym, toupper(phrase[i+1]));
        }
    }

    return acronym;
}
