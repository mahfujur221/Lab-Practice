#include <stdio.h>

void greedyCoinChange(int coins[], int n, int amount) {
    printf("Selected coins: ");

    int coinCount = 0;

    for (int i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            printf("%d ", coins[i]);
            amount -= coins[i];
            coinCount++;
        }
    }

    printf("\nMinimum number of coins: %d\n", coinCount);
}

int main() {
    int n;

    printf("Enter the number of coin denominations: ");
    scanf("%d", &n);

    int coins[n];

    printf("Enter the coin denominations:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }

    int amount;

    printf("Enter the amount for which you want to make change: ");
    scanf("%d", &amount);

    greedyCoinChange(coins, n, amount);

    return 0;
}

