#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int n;
        scanf("%d", &n);  // Read the number of movies

        int L[n], R[n];
        
        // Read lengths of the movies
        for (int i = 0; i < n; i++) {
            scanf("%d", &L[i]);
        }

        // Read ratings of the movies
        for (int i = 0; i < n; i++) {
            scanf("%d", &R[i]);
        }

        int best_index = -1;
        int best_value = -1;
        int best_rating = -1;

        // Iterate through each movie
        for (int i = 0; i < n; i++) {
            int value = L[i] * R[i];  // Calculate L[i] * R[i]

            // Check if this movie is better based on the criteria
            if (value > best_value || 
                (value == best_value && R[i] > best_rating) || 
                (value == best_value && R[i] == best_rating && (best_index == -1 || i < best_index))) {
                
                best_value = value;
                best_rating = R[i];
                best_index = i;  // Store the index (0-based)
            }
        }

        // Print the result with 1-based indexing
        printf("%d\n", best_index + 1);
    }

    return 0;
}
