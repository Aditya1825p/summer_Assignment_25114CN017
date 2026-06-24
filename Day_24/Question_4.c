#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    int visited[100] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String after removing duplicates: ");

    for(i = 0; str[i] != '\0'; i++) {
        if(visited[i] == 0) {
            printf("%c", str[i]);

            for(j = i + 1; str[j] != '\0'; j++) {
                if(str[i] == str[j]) {
                    visited[j] = 1;
                }
            }
        }
    }

    printf("\n");

    return 0;
}