#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, K; // Number of people and initial amount in ATM
        scanf("%d %d", &N, &K);

        int A[N]; // Withdrawal amounts
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int current_balance = K;
        char result[N + 1]; // Result string for this test case
        result[N] = '\0'; // Null terminate the string

        for (int i = 0; i < N; i++) {
            if (A[i] <= current_balance) {
                result[i] = '1'; // Success
                current_balance -= A[i]; // Deduct amount
            } else {
                result[i] = '0'; // Failure
            }
        }

        printf("%s\n", result); // Output result for the test case
    }

    return 0;
}
