#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // Working hours from Monday to Thursday (X) and Friday (Y)
        scanf("%d %d", &X, &Y);

        // Calculate total working hours in a week
        int total_hours = (4 * X) + Y;

        // Print the result
        printf("%d\n", total_hours);
    }

    return 0;
}
