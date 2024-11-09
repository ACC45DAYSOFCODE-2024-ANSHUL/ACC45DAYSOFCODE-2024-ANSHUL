#include <stdio.h>
#include <stdlib.h>

#define MAX_TEST_CASES 100000
#define MAX_ARRAY_SIZE 200000

// Function to calculate the maximum distance for each test case
long long max_distance(int N, int M, int A[]) {
    long long total_distance = 0;
    
    for (int i = 0; i < N; i++) {
        int ai = A[i];
        // Calculate the maximum possible distance for this element in array A
        total_distance += (long long)fmax(abs(ai - 1), abs(ai - M));
    }

    return total_distance;
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    // Allocate memory for input and results
    int *A = (int *)malloc(MAX_ARRAY_SIZE * sizeof(int));
    long long result;

    while (T--) {
        int N, M;
        // Read N and M
        scanf("%d %d", &N, &M);

        // Read the array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        // Calculate the maximum distance for the current test case
        result = max_distance(N, M, A);

        // Output the result for the current test case
        printf("%lld\n", result);
    }

    // Free the allocated memory
    free(A);
    
    return 0;
}
