#include <stdio.h>
int count_Swap(int carri[], int L) {
 int swaps = 0;
 for (int i = 0; i < L; i++) {
 for (int j = 0; j < L - i - 1; j++) {
 if (carri[j] > carri[j + 1]) {
 int temp = carri[j];
 carri[j] = carri[j + 1];
 carri[j + 1] = temp;
 swaps++;
 }
 }
 }
 return swaps;
}
int main() {
 int N;
 scanf("%d", &N);
 while (N--) {
 int L;
 scanf("%d", &L);
 int carri[L];
 for (int i = 0; i < L; i++) {
 scanf("%d", &carri[i]);
 }
 int swapsNeeded = count_Swap(carri, L);
 printf("Optimal train swapping takes %d swaps.\n", swapsNeeded);
 }
 return 0;
}
