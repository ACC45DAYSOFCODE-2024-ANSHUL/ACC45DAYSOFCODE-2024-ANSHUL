#include <stdio.h>

// Function to count Tuesdays within N days
int count_tuesdays(int N) {
    int count = 0;
    int day = 2; // The first Tuesday is on day 2

    // Keep counting Tuesdays while the day is less than or equal to N
    while (day <= N) {
        count++;
        day += 7; // Move to the next Tuesday (7 days later)
    }
    
    return count;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    // Process each test case
    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        // Output the number of Tuesdays in the next N days
        printf("%d\n", count_tuesdays(N));
    }

    return 0;
}
