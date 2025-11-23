#include <stdio.h>
#include <limits.h>
#define n 9

int main() {
    int E[n] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}, max_sum = INT_MIN, start=0, end=0;

    for (int i = 0; i < n; i++) {                 
        if (i+1<n && E[i] + E[i+1] > max_sum) {
            max_sum = E[i] + E[i+1];
            start = i;
            end = i + 1;
        }
    }

    printf("max_sum = %d\nstart: %d end: %d\n", max_sum, start, end);
    return 0;
}