#include <stdio.h>
#include <stdlib.h>

// Comparator function for sorting in ascending order
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N;  // Number of songs
        scanf("%d", &N);
        
        int A[N];  // Array to store song lengths
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        int K;  // Position of "Uncle Johny" (1-based)
        scanf("%d", &K);
        
        // Get the length of "Uncle Johny" song (1-based index -> 0-based index)
        int uncle_johny_song = A[K - 1];
        
        // Sort the array
        qsort(A, N, sizeof(int), compare);
        
        // Find the new position of "Uncle Johny" in the sorted array
        for (int i = 0; i < N; i++) {
            if (A[i] == uncle_johny_song) {
                printf("%d\n", i + 1);  // Print the position (1-based)
                break;
            }
        }
    }
    
    return 0;
}
