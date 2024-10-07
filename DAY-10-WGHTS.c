#include <stdio.h>

int can_measure_weight(int W, int X, int Y, int Z) {
    // Check if W can be measured using any combination of X, Y, Z
    if (W == X || W == Y || W == Z) {
        return 1; // YES
    }
    if (W == X + Y || W == X + Z || W == Y + Z) {
        return 1; // YES
    }
    if (W == X + Y + Z) {
        return 1; // YES
    }
    return 0; // NO
}

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    for (int i = 0; i < T; i++) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z); // Read W, X, Y, Z
        if (can_measure_weight(W, X, Y, Z)) {
            printf("YES\n"); // Output YES
        } else {
            printf("NO\n"); // Output NO
        }
    }
    return 0;
}