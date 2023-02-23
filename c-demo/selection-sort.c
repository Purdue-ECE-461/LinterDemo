#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j <= n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // swap
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

        printf("Current sorted array: ");
        for (int k = 0; k <= n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selection_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
