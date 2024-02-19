#include <stdio.h>

int main() {
    int arr[100];
    int size, i, toSearch, found;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    /* Input elements into the array */
    printf("Enter the elements in the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to search: ");
    scanf("%d", &toSearch);

    /* Assume that the element does not exist in the array */
    found = 0;

    for (i = 0; i < size; i++) {
        /*
         * If the element is found in the array, raise the found flag
         * and terminate the loop.
         */
        if (arr[i] == toSearch) {
            found = 1;
            break;
        }
    }

    /*
     * If the element is not found in the array
     */
    if (found == 1) {
        printf("\n%d is found at index %d", toSearch, i);
    } else {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
}
