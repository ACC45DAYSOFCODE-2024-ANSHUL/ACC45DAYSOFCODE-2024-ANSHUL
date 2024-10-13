#include <stdio.h>
#include <string.h>

void encode_message(int T) {
    while (T--) {
        int N;
        scanf("%d", &N);
        char S[N + 1]; // +1 for the null terminator
        scanf("%s", S);

        // Step 1: Swap characters
        for (int i = 0; i < N - 1; i += 2) {
            char temp = S[i];
            S[i] = S[i + 1];
            S[i + 1] = temp;
        }

        // Step 2: Replace characters
        for (int i = 0; i < N; i++) {
            S[i] = 'a' + ('z' - S[i]); // Replace each character
        }

        // Print the encoded message
        printf("%s\n", S);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    encode_message(T);
    return 0;
}
