#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000000

// Function to track the maximum number of people in the office
int max_people_in_office(int *swipes, int N) {
    int *in_office = (int *)calloc(N + 1, sizeof(int));  // To track people inside the office
    int current_people = 0;
    int max_people = 0;

    // Process each swipe
    for (int i = 0; i < N; i++) {
        int person = swipes[i];

        if (in_office[person] == 0) {  // Person enters the office
            in_office[person] = 1;
            current_people++;
        } else {  // Person leaves the office
            in_office[person] = 0;
            current_people--;
        }

        if (current_people > max_people) {
            max_people = current_people;  // Update maximum people in the office
        }
    }

    free(in_office);
    return max_people;
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;  // Number of swipes for this test case
        scanf("%d", &N);

        int swipes[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &swipes[i]);
        }

        // Call function to find the maximum number of people in the office
        int result = max_people_in_office(swipes, N);
        printf("%d\n", result);
    }

    return 0;
}
