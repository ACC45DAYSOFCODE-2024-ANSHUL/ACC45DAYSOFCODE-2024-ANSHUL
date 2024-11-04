#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;  // Size of the array B
        scanf("%d", &N);
        
        int B[N];  // Array B
        int count_ones = 0;  // Count of 1's in array B
        
        // Read the binary array B and count the number of 1's
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
            if (B[i] == 1) {
                count_ones++;
            }
        }

        // Determine if the count of 1's is even or odd
        if (count_ones % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
