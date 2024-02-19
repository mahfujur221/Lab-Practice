#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    } else {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sumOfDigits(sum);
    }
}

int main() {
    int n;

    while (1) {
        // Input integer
        scanf("%d", &n);

        // Terminate if n is 0
        if (n == 0) {
            break;
        }

        // Calculate g(n) and print the result
        int result = sumOfDigits(n);
        printf("%d\n", result);
    }

    return 0;
}
