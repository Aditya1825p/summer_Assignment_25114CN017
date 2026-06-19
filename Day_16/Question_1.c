#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;   
    int i, sum = 0, expectedSum, missing;

    expectedSum = n * (n + 1) / 2;

    for(i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    missing = expectedSum - sum;

    printf("Missing Number = %d", missing);

    return 0;
}