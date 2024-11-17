#include <stdio.h>
#include <math.h>

int solve_case(int N, int X, int healths[]) {
    // Calculate the time required in Single-Target Mode
    int single_target_time = 0;
    for (int i = 0; i < N; i++) {
        single_target_time += (int)ceil((double)healths[i] / X);
    }
    
    // Calculate the time required in Multi-Target Mode
    int multi_target_time = 0;
    for (int i = 0; i < N; i++) {
        if (healths[i] > multi_target_time) {
            multi_target_time = healths[i];
        }
    }
    
    // Return the minimum of the two times
    return (single_target_time < multi_target_time) ? single_target_time : multi_target_time;
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int healths[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &healths[i]);
        }

        // Solve the current test case and print the result
        int result = solve_case(N, X, healths);
        printf("%d\n", result);
    }

    return 0;
}

