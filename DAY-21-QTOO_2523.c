#include <stdio.h>
#include <string.h>

int max_deletion_length(char *S, int N) {
    int count[26] = {0};  // Array to count occurrences of each character

    // Count frequencies of characters in the string
    for (int i = 0; i < N; i++) {
        count[S[i] - 'a']++;
    }

    // Check if any character has a count of 2 or more
    int can_form_palindrome = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] >= 2) {
            can_form_palindrome = 1;
            break;
        }
    }

    // If we can form a palindrome, return N - 2
    if (can_form_palindrome) {
        return N - 2;
    } else {
        return -1;
    }
}

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Read the length of the string
        char S[101];       // String buffer (max length 100 + null terminator)
        scanf("%s", S);    // Read the string

        // Get the result and print
        int result = max_deletion_length(S, N);
        printf("%d\n", result);
    }

    return 0;
}

