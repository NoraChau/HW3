#include <stdio.h>
#define n 13

int main() {
    int S[n] = {0,0,0,1,1,2,3,3,3,3,4,5,5}, w=0;

    //Setting distinct values to the front indices
    for(int i=0; i<n; i++) {
        int num = S[i];
        if (S[num] != S[i]){
            S[num] = S[i];

        }
    }

    //Find w
    int outside = 0;
    for(w; w<n; w++) {
        
        // Once a duplicate is found, meaning it's outside the unique range
        for(int i=0; i<w; i++) {
            if(S[w] == S[i]) {
                outside = 1;
            }
        }
        if(outside)
            break;
    }

    printf("unique_length w: %d\n", w);
    printf("unique: ");
    for(int i=0; i<w; i++) {
        printf("%d ", S[i]);
    }

    printf("\n");
    return 0;
}