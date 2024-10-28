#include <stdio.h>
#include <string.h>

#define MAX_JEWELS 200

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char jewels[MAX_JEWELS + 1];
        scanf("%s", jewels);

        int count[256] = {0}; // Array to count occurrences of each jewel (ASCII size)
        int total_cost = 0;

        // Count occurrences of each jewel
        for (int i = 0; jewels[i] != '\0'; i++) {
            count[(unsigned char)jewels[i]]++;
        }

        // Calculate the total cost based on counts
        for (int i = 0; i < 256; i++) {
            if (count[i] > 0) {
                total_cost += (count[i] + 1) / 2; // Equivalent to ceil(count / 2)
            }
        }

        // Output the result for this test case
        printf("%d\n", total_cost);
    }
    return 0;
}
