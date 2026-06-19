#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = 4, n2 = 4;
    int unionArr[20];
    int k = 0;

    // Copy first array
    for(int i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }

    // Add unique elements from second array
    for(int i = 0; i < n2; i++) {
        int found = 0;

        for(int j = 0; j < k; j++) {
            if(arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of arrays: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}