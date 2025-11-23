#include <stdio.h>
#define n 10
#define k 3

int main() {
    int B[n] = {1,2,3,4,5,6,7,8,9,10};

    /*Shifting array B to the right by 1 position k times because
    doing it all at once is unimaginable.*/

    for(int away=1; away<=k; away++) { // Count positions away from initial array

        /* 
        Pulling elements left to right from the end of the array
        Can't push elements left to right because it keeps resulting in
        loss of elements.

        Take out last element to put it on the other end as that is the
        element going out-of-bound.
        */
        int temp = B[n-1];
        for(int i=n-1; i>0; i--) {
            B[i] = B[i-1];
        }
        B[0] = temp;
    }

    printf("After rotate-right-by-3: ");
    for (int i=0; i<n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    return 0;
}