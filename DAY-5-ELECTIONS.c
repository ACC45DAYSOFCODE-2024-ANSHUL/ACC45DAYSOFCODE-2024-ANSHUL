#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X_A, X_B, X_C;
        // Read the votes for parties A, B, and C
        scanf("%d %d %d", &X_A, &X_B, &X_C);

        // Determine if any party has a clear majority
        if (X_A > 50) {
            printf("A\n");
        } else if (X_B > 50) {
            printf("B\n");
        } else if (X_C > 50) {
            printf("C\n");
        } else {
            printf("NOTA\n");
        }
    }

    return 0;
}
