#include <stdio.h>

int main() {
    int T;
    // Read the number of test cases
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d;
        // Read the tastiness values for the ingredients
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Calculate the possible tastiness values
        int tastiness_A_C = a + c;
        int tastiness_A_D = a + d;
        int tastiness_B_C = b + c;
        int tastiness_B_D = b + d;

        // Find the maximum tastiness
        int max_tastiness = tastiness_A_C;
        if (tastiness_A_D > max_tastiness) {
            max_tastiness = tastiness_A_D;
        }
        if (tastiness_B_C > max_tastiness) {
            max_tastiness = tastiness_B_C;
        }
        if (tastiness_B_D > max_tastiness) {
            max_tastiness = tastiness_B_D;
        }

        // Print the maximum tastiness for the current test case
        printf("%d\n", max_tastiness);
    }

    return 0;
}
