#include <stdlib.h>
#include <string.h>

/**
 * main - splits a string and returns an array of each word of the string
 * returns: word
 */
char** split_string(char* str, int* num_words) {
    // Count the number of words
    int count = 0;
    char* p = str;
    while (*p != '\0') {
        if (*p == ' ' || *p == '\t' || *p == '\n') {
            count++;
        }
        p++;
    }
    count++;  // for the last word

    // Allocate memory for the array of words
    char** words = (char**) malloc(count * sizeof(char*));
    if (words == NULL) {
        return NULL;
    }
    memset(words, 0, count * sizeof(char*));

    // Split the string into words
    char* word = strtok(str, " \t\n");
    int i = 0;
    while (word != NULL) {
        words[i] = word;
        i++;
        word = strtok(NULL, " \t\n");
    }

    *num_words = count;
    return words;
}
