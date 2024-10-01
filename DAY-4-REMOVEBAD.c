#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100000

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read length of array

        int A[MAX_N];
        int count[MAX_N + 1] = {0}; // Array to count occurrences (1-based indexing)

        // Read the array elements
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            count[A[i]]++; // Increment the count of the element
        }

        // Find the maximum frequency
        int max_frequency = 0;
        for (int i = 1; i <= N; i++) {
            if (count[i] > max_frequency) {
                max_frequency = count[i];
            }
        }

        // Minimum operations required
        int min_operations = N - max_frequency;
        printf("%d\n", min_operations);
    }

    return 0;
}
