#include <stdio.h>

// Function to count the number of swaps needed to order the train
int countSwaps(int carriages[], int length) {
    int swaps = 0;

    for (int i = 0; i < length; i++) {
        while (carriages[i] != i + 1) {
            int temp = carriages[i];
            carriages[i] = carriages[temp - 1];
            carriages[temp - 1] = temp;
            swaps++;
        }
    }

    return swaps;
}

int main() {
    int N; // Number of test cases
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int L; // Length of the train
        scanf("%d", &L);

        int carriages[L];

        // Input the permutation of carriages
        for (int j = 0; j < L; j++) {
            scanf("%d", &carriages[j]);
        }

        // Count the swaps and print the result
        int swaps = countSwaps(carriages, L);
        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    return 0;
}
