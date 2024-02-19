#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_index = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_index])
                min_index = i;
        }
        swap(&array[min_index], &array[step]);   // Swap function call this Linen for number selection swap
    }
}

int main() {
    int size;
    printf("Enter how many numbers you want to sort: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    selectionSort(array, size);

    printf("Sorted array in Ascending Order: ");
    printArray(array, size);

    return 0;
}
