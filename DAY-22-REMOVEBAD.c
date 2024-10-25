#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100001

// Function to compare integers for qsort
int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int *A = (int *)malloc(N * sizeof(int));
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        // Sort the array
        qsort(A, N, sizeof(int), compare);

        // Count the maximum frequency of elements
        int max_freq = 1, current_freq = 1;

        for (int i = 1; i < N; i++) {
            if (A[i] == A[i - 1]) {
                current_freq++;
            } else {
                if (current_freq > max_freq) {
                    max_freq = current_freq;
                }
                current_freq = 1;
            }
        }

        // Check the last frequency count
        if (current_freq > max_freq) {
            max_freq = current_freq;
        }

        // Calculate minimum operations
        int min_operations = N - max_freq;
        printf("%d\n", min_operations);

        // Free allocated memory
        free(A);
    }

    return 0;
}
