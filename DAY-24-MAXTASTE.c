#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d); // Read tastiness values

        // Calculate all possible combinations
        int tastiness1 = a + c; // A + C
        int tastiness2 = a + d; // A + D
        int tastiness3 = b + c; // B + C
        int tastiness4 = b + d; // B + D

        // Find the maximum tastiness
        int max_tastiness = tastiness1;

        if (tastiness2 > max_tastiness) max_tastiness = tastiness2;
        if (tastiness3 > max_tastiness) max_tastiness = tastiness3;
        if (tastiness4 > max_tastiness) max_tastiness = tastiness4;

        printf("%d\n", max_tastiness); // Output the result
    }

    return 0;
}
