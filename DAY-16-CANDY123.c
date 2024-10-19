#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);  // Read A and B

        int limak_total = 0;  // Total candies eaten by Limak
        int bob_total = 0;     // Total candies eaten by Bob
        int turn = 1;          // Starting turn

        while (1) {
            if (turn % 2 == 1) {  // Limak's turn (odd turns)
                if (limak_total + turn > A) {
                    printf("Bob\n");  // Limak cannot eat, Bob wins
                    break;
                }
                limak_total += turn;  // Limak eats candies
            } else {  // Bob's turn (even turns)
                if (bob_total + turn > B) {
                    printf("Limak\n");  // Bob cannot eat, Limak wins
                    break;
                }
                bob_total += turn;  // Bob eats candies
            }
            turn++;  // Move to the next turn
        }
    }

    return 0;
}
