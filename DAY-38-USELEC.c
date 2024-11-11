#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for sorting
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // N = number of states, X = votes Chef can cast
        
        int A[N], B[N];
        
        // Read votes for candidate A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        // Read votes for candidate B
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }
        
        // Count the states Candidate A is already winning and the deficits
        int a_wins = 0;
        int deficits[N];
        int deficit_count = 0;
        
        for (int i = 0; i < N; i++) {
            if (A[i] > B[i]) {
                a_wins++;  // Candidate A is already winning in this state
            } else {
                // Calculate how many votes Chef needs to flip this state to A's side
                deficits[deficit_count++] = B[i] - A[i] + 1;
            }
        }
        
        // Candidate A needs more than half the states to win
        int needed_wins = (N / 2) + 1;
        
        // If Candidate A is already winning enough states
        if (a_wins >= needed_wins) {
            printf("YES\n");
            continue;
        }
        
        // Sort the deficits in ascending order to use Chef's votes efficiently
        qsort(deficits, deficit_count, sizeof(int), compare);
        
        // Try to flip the states with the smallest deficits
        for (int i = 0; i < deficit_count; i++) {
            if (X >= deficits[i]) {
                X -= deficits[i];
                a_wins++;  // A wins one more state
                if (a_wins >= needed_wins) {
                    printf("YES\n");
                    break;
                }
            } else {
                break;  // No more votes to flip a state
            }
        }
        
        // If not enough states were flipped, print NO
        if (a_wins < needed_wins) {
            printf("NO\n");
        }
    }

    return 0;
}
