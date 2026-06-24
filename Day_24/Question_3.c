#include <stdio.h>

int main() {
    char str[200], longest[50];
    int i = 0, j = 0;
    int maxLen = 0, currLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;

                for (j = 0; j < maxLen; j++) {
                    longest[j] = str[start + j];
                }
                longest[j] = '\0';
            }

            currLen = 0;
            start = i + 1;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}