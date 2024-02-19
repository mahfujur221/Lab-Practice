#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        // If the key is present at the middle
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is smaller than the middle element, search in the left subarray
        if (arr[mid] > key) {
            return binarySearchRecursive(arr, low, mid - 1, key);
        }

        // If the key is larger than the middle element, search in the right subarray
        return binarySearchRecursive(arr, mid + 1, high, key);
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

    // Input sorted array elements from the user
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;

    // Input key to search from the user
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform binary search using recursion
    int result = binarySearchRecursive(arr, 0, n - 1, key);

    // Print the result
    if (result != -1) {
        printf("Key found at index %d.\n", result);
    } else {
        printf("Key not found in the array.\n");
    }

    return 0;
}
