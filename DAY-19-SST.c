#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B); // Read A and B

        // Calculate valuations
        int valuation_first = 10 * A; // Valuation from the first investor
        int valuation_second = 5 * B;  // Valuation from the second investor

        // Compare valuations and output result
        if (valuation_first > valuation_second) {
            printf("FIRST\n");
        } else if (valuation_first < valuation_second) {
            printf("SECOND\n");
        } else {
            printf("ANY\n");
        }
    }

    return 0;
}
