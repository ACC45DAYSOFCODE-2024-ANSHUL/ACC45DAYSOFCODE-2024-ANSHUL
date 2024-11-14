#include <stdio.h>

void solve() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    // Process each test case
    for (int i = 0; i < T; i++) {
        int N, X, P;
        scanf("%d %d %d", &N, &X, &P);  // Read N (total questions), X (correct answers), P (passing score)
        
        // Calculate the total score
        int total_score = 4 * X - N;  // Total score = 4 * X - N
        
        // Check if Chef passes or fails
        if (total_score >= P) {
            printf("PASS\n");  // Chef passes
        } else {
            printf("FAIL\n");  // Chef fails
        }
    }
}

int main() {
    solve();  // Call the function to process the test cases
    return 0;
}
