#include <stdio.h>

int max_trace_in_submatrix(int N, int A[N][N]) {
    int max_trace = -1e9;  // Start with a very small number to track the maximum trace
    
    // Try submatrices of all possible sizes l
    for (int l = 1; l <= N; l++) {
        // Try every possible starting position for the submatrix of size l
        for (int r = 0; r <= N - l; r++) {
            for (int c = 0; c <= N - l; c++) {
                // Calculate the trace of the submatrix starting at (r, c) with size l
                int trace = 0;
                for (int i = 0; i < l; i++) {
                    trace += A[r + i][c + i];  // diagonal element A[r+i, c+i]
                }
                if (trace > max_trace) {
                    max_trace = trace;
                }
            }
        }
    }
    
    return max_trace;
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N);  // Size of the matrix
        
        int A[N][N];
        
        // Read the matrix
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &A[i][j]);
            }
        }
        
        // Get the result and print it
        printf("%d\n", max_trace_in_submatrix(N, A));
    }
    
    return 0;
}

