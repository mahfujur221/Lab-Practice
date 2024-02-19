#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        int arr[num];
        for (int j = 0; j < num; j++) {
            scanf("%d", &arr[j]);
        }

        int temp = 0, count = 0;
        for (int j = 0; j < num; j++) {
            for (int k = 0; k < num - 1; k++) {
                if (arr[k] > arr[k + 1]) {
                    temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                    count++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", count);
    }

    return 0;
}

