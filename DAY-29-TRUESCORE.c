#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int A, B, C, D;
        scanf("%d %d", &A, &B); // Current scores
        scanf("%d %d", &C, &D); // Desired scores

        // Check if the transition from A:B to C:D is possible
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}
