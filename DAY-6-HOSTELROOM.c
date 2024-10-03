#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // Read N (length of array) and X (initial number of people)
        
        int *A = (int *)malloc(N * sizeof(int));  // Allocate memory for array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);  // Read the events
        }

        int current_people = X;
        int max_people = X;

        for (int i = 0; i < N; i++) {
            current_people += A[i];  // Update current people based on the event
            if (current_people > max_people) {
                max_people = current_people;  // Update max if current is greater
            }
        }

        printf("%d\n", max_people);  // Output the maximum number of people
        free(A);  // Free allocated memory
    }

    return 0;
}
