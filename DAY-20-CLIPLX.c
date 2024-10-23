#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // Points needed and matches remaining
        scanf("%d %d", &X, &Y);

        // Calculate the minimum wins needed
        int min_wins = (X > Y) ? (X - Y) : 0;

        // Output the result
        printf("%d\n", min_wins);
    }

    return 0;
}
