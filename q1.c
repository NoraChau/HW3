#include <stdio.h>
#define n 12

int main() {
    int A[n] = {9, -1, 4, 0, 7, 7, 3, -2, 5, 8, 1, 6};
    int left = 0, right = n - 1, count = 0;
    
    for (int i = 0; i < n / 2; i++) {
        int temp = A[left];
        A[left] = A[right];
        A[right] = temp;
        left++, right--, count++;
    }

    printf("After reverse: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\nSwapCount: %d\n", count);
    return 0;
}