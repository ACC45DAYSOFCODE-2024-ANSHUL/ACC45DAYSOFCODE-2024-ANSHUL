#include <stdio.h>

// Function to calculate the number of cells under attack by the Queen
int queen_attack(int N, int X, int Y) {
    // Horizontal and Vertical attacks (all except the Queen's position)
    int horizontal_attack = N - 1;
    int vertical_attack = N - 1;

    // Diagonal attacks (top-left to bottom-right)
    int top_left = (X - 1 < Y - 1) ? X - 1 : Y - 1;
    int bottom_right = (N - X < N - Y) ? N - X : N - Y;

    // Diagonal attacks (top-right to bottom-left)
    int top_right = (X - 1 < N - Y) ? X - 1 : N - Y;
    int bottom_left = (N - X < Y - 1) ? N - X : Y - 1;

    // Total number of cells under attack
    int total_attack = horizontal_attack + vertical_attack + top_left + bottom_right + top_right + bottom_left;
    
    return total_attack;
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        // Calculate and output the result for each test case
        printf("%d\n", queen_attack(N, X, Y));
    }

    return 0;
}
