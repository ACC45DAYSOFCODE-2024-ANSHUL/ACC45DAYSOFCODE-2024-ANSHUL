#include <stdio.h>
#include <string.h>

void lexicographically_smallest_binary_string(int T) {
    for (int i = 0; i < T; i++) {
        int N;
        char A[100001]; // Maximum length based on constraints
        scanf("%d", &N);
        scanf("%s", A);
        
        int count_0 = 0, count_1 = 0;

        // Count the number of 0's and 1's
        for (int j = 0; j < N; j++) {
            if (A[j] == '0') {
                count_0++;
            } else {
                count_1++;
            }
        }

        // Construct the result string
        for (int j = 0; j < count_0; j++) {
            putchar('0');
        }
        for (int j = 0; j < count_1; j++) {
            putchar('1');
        }
        putchar('\n'); // New line for the next test case
    }
}

int main() {
    int T;
    scanf("%d", &T);
    lexicographically_smallest_binary_string(T);
    return 0;
}
