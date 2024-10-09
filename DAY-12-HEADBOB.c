#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of people

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of gestures
        char gestures[N + 1]; // Array to hold the gestures string
        scanf("%s", gestures); // Read the gestures string

        // Check the gestures to determine the nationality
        if (strchr(gestures, 'I')) {
            printf("INDIAN\n");
        } else if (strchr(gestures, 'Y')) {
            printf("NOT INDIAN\n");
        } else {
            printf("NOT SURE\n");
        }
    }

    return 0;
}
