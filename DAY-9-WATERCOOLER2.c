int main() {
    int T;
    long long X, Y;

    // Read the number of test cases
    scanf("%d", &T);

    // Process each test case
    for (int i = 0; i < T; i++) {
        // Read the values of X and Y
        scanf("%lld %lld", &X, &Y);

        // If renting is not cheaper for any number of months
        if (X >= Y) {
            printf("0\n");
        } else {
            // Calculate the maximum number of months for which renting is cheaper
            printf("%lld\n", (Y - 1) / X);
        }
    }

    return 0;
}