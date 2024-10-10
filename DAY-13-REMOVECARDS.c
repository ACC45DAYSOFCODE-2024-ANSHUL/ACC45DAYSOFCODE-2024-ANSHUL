#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Number of cards
        scanf("%d", &N);

        int cards[100]; // Array to store card values
        int frequency[11] = {0}; // Frequency array for values 1 to 10

        // Read the card values and count frequencies
        for (int i = 0; i < N; i++) {
            scanf("%d", &cards[i]);
            frequency[cards[i]]++;
        }

        // Find the maximum frequency
        int max_frequency = 0;
        for (int i = 1; i <= 10; i++) {
            if (frequency[i] > max_frequency) {
                max_frequency = frequency[i];
            }
        }

        // Calculate the minimum moves required
        int moves = N - max_frequency;
        printf("%d\n", moves);
    }

    return 0;
}
