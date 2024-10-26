#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read number of fingers/glove sheaths

        int fingers[N], gloves[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &fingers[i]); // Read lengths of fingers
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &gloves[i]); // Read lengths of glove sheaths
        }

        int front_fits = 1; // Assume it fits in front initially
        int back_fits = 1;  // Assume it fits in back initially

        for (int i = 0; i < N; i++) {
            if (fingers[i] > gloves[i]) {
                front_fits = 0; // Doesn't fit in front
            }
            if (fingers[i] > gloves[N - 1 - i]) {
                back_fits = 0; // Doesn't fit in back
            }
        }

        // Determine the output based on fits
        if (front_fits && back_fits) {
            printf("both\n");
        } else if (front_fits) {
            printf("front\n");
        } else if (back_fits) {
            printf("back\n");
        } else {
            printf("none\n");
        }
    }

    return 0;
}
