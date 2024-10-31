#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void rearrange_array(int N, int *A, int *result) {
    // Sort the array
    qsort(A, N, sizeof(int), compare);
    
    int left = 0;  // Pointer for the smallest elements
    int right = N - 1;  // Pointer for the largest elements

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            result[i] = A[left++];
        } else {
            result[i] = A[right--];
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N);  // Read size of the array
        
        int *A = (int *)malloc(N * sizeof(int));  // Allocate memory for the array
        int *result = (int *)malloc(N * sizeof(int));  // Allocate memory for the result array
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);  // Read the elements of the array
        }
        
        rearrange_array(N, A, result);  // Rearrange the array
        
        for (int i = 0; i < N; i++) {
            printf("%d ", result[i]);  // Print the result
        }
        printf("\n");
        
        free(A);     // Free allocated memory for A
        free(result); // Free allocated memory for result
    }
    
    return 0;
}
