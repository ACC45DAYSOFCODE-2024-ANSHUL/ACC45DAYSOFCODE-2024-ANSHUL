#include <stdio.h>
#include <string.h>

void encode_message(char *S, int N) {
    // Step 1: Swap characters in pairs
    for (int i = 0; i < N - 1; i += 2) {
        // Swap characters S[i] and S[i+1]
        char temp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = temp;
    }

    // Step 2: Transform each character to its opposite in the alphabet
    for (int i = 0; i < N; i++) {
        S[i] = 'a' + ('z' - S[i]);  // Convert character to its opposite
    }
}

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Read the length of the string
        char S[N + 1];  // Declare string with length N (+1 for null-terminator)
        scanf("%s", S);  // Read the input string

        // Call the function to encode the message
        encode_message(S, N);

        // Print the encoded message
        printf("%s\n", S);
    }

    return 0;
}
