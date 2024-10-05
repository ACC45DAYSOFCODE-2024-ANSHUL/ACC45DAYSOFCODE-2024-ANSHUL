#include <stdio.h>

#define MAX_N 100000

// Function to check if the array is pseudo-sorted
const char* is_pseudo_sorted(int arr[], int n) {
    int violations = 0;
    int violation_index = -1;

    // Check for violations
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            violations++;
            violation_index = i; // Store the index of the violation
            if (violations > 1) {
                return "NO"; // More than one violation
            }
        }
    }

    // If there are no violations, it is sorted
    if (violations == 0) {
        return "YES";
    }

    // If there's exactly one violation, check after a potential swap
    if (violations == 1) {
        // Swap the elements at the violation index
        int temp = arr[violation_index];
        arr[violation_index] = arr[violation_index + 1];
        arr[violation_index + 1] = temp;

        // Check if now the array is sorted
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return "NO";
            }
        }
        return "YES";
    }

    return "NO"; // This line is technically unreachable
}

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the size of the array
        int A[MAX_N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]); // Read the array elements
        }

        // Check if the array is pseudo-sorted
        const char* result = is_pseudo_sorted(A, N);
        printf("%s\n", result); // Print the result for this test case
    }

    return 0;
}
