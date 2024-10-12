#include <stdio.h>
#include <stdlib.h>

#define MAX_ANIMAL_TYPE 100

void solve(int n, int animals[]) {
    int frequency[MAX_ANIMAL_TYPE + 1] = {0};

    // Count the frequency of each animal type
    for (int i = 0; i < n; i++) {
        frequency[animals[i]]++;
    }

    // Check if all counts are even
    for (int i = 1; i <= MAX_ANIMAL_TYPE; i++) {
        if (frequency[i] % 2 != 0) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int *animals = (int *)malloc(N * sizeof(int));
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &animals[i]);
        }

        solve(N, animals);
        free(animals);
    }

    return 0;
}
