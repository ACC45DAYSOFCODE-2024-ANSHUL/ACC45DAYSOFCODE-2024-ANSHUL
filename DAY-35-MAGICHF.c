#include <stdio.h>

void solve() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    // Process each test case
    for (int t = 0; t < T; t++) {
        int N, X, S;
        scanf("%d %d %d", &N, &X, &S);  // Read N (boxes), X (initial position of coin), S (number of swaps)

        int coin_position = X;  // Initialize coin's position
        
        // Process each swap
        for (int i = 0; i < S; i++) {
            int A, B;
            scanf("%d %d", &A, &B);  // Read the pair of swapped boxes

            // If the coin is in one of the swapped boxes, update its position
            if (coin_position == A) {
                coin_position = B;
            } else if (coin_position == B) {
                coin_position = A;
            }
        }

        // Output the final position of the coin after all swaps
        printf("%d\n", coin_position);
    }
}

int main() {
    solve();  // Call the solve function to process all test cases
    return 0;
}
