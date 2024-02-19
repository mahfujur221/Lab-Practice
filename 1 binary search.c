#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the key is present at the middle
        if (arr[mid] == key) {
            return mid;
        }

        // If key is greater, ignore the left half
        else if (arr[mid] < key) {
            low = mid + 1;
        }

        // If key is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Key not found
    return -1;
}

int main() {
    int n;

    // Input array size from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements from the user
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;

    // Input key to search from the user
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, key);

    // Print the result
    if (result != -1) {
        printf("Key found at index %d.\n", result);
    } else {
        printf("Key not found in the array.\n");
    }

    return 0;
}
