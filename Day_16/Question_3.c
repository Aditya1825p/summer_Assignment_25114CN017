#include <stdio.h>

int main() {
    int arr[] = {1, 4, 5, 6, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    int found = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found.");
    }

    return 0;
}