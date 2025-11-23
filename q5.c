#include <stdio.h>
#define n 25

int main() {
    int D[n] = {9,0,2,8,4,3,7,6,5,1,9,8,7,3,2,2,1,0,5,6,4,4,3,9,0};
    int freq[10] = {0}, D_sorted[n] = {0};

    // Import D frequencies into freq
    for (int i = 0; i < n; i++) 
        ++freq[D[i]];

    // Print frequencies
    for (int i = 0; i < 10; i++) {
        printf("freq[%d] = %d \n", i, freq[i]);
    }

    // Reconstruct sorted array D_sorted
    int n_away = 0;
    for (int num=0; num < 10; num++) {
        for (int s=0; s < freq[num]; s++) {
            D_sorted[0 + n_away] = num;
            n_away++;
        }
    }

    // Print sorted array
    printf("\nSorted: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", D_sorted[i]);
    }
    printf("\n");

    return 0;
}