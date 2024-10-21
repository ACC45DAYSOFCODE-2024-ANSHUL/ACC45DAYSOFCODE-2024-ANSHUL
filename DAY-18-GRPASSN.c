#include <stdio.h>

#define MAX_PEOPLE 100005

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Read number of people
        
        int P[N];
        int count[MAX_PEOPLE] = {0};  // Frequency array for preferences

        // Read preferences and count occurrences
        for (int i = 0; i < N; i++) {
            scanf("%d", &P[i]);
            count[P[i]]++;  // Increment the count for the preferred group size
        }

        int possible = 1;  // Assume it's possible until proven otherwise

        // Check each group size
        for (int i = 1; i <= N; i++) {
            if (count[i] > 0) {  // If there are people who prefer this group size
                if (count[i] % i != 0) {
                    possible = 0;  // Not possible to form groups
                    break;
                }
            }
        }

        // Output the result for the current test case
        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
