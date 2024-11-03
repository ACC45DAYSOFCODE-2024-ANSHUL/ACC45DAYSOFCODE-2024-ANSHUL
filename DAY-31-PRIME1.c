#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void sieve_of_eratosthenes(int limit, bool *is_prime) {
    for (int i = 2; i <= limit; i++) {
        is_prime[i] = true;
    }
    for (int p = 2; p * p <= limit; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                is_prime[i] = false;
            }
        }
    }
}

void segmented_sieve(long long m, long long n) {
    long long limit = (long long)sqrt(n) + 1;
    bool *is_prime_small = malloc((limit + 1) * sizeof(bool));
    sieve_of_eratosthenes(limit, is_prime_small);

    bool *is_prime_range = malloc((n - m + 1) * sizeof(bool));
    for (long long i = 0; i <= n - m; i++) {
        is_prime_range[i] = true;
    }

    for (int p = 2; p <= limit; p++) {
        if (is_prime_small[p]) {
            // Find the minimum number in the [m, n] range that is a multiple of 'p'
            long long start = fmax(p * p, m + (p - m % p) % p);
            for (long long j = start; j <= n; j += p) {
                is_prime_range[j - m] = false;
            }
        }
    }

    for (long long i = fmax(m, 2); i <= n; i++) {
        if (is_prime_range[i - m]) {
            printf("%lld\n", i);
        }
    }

    free(is_prime_small);
    free(is_prime_range);
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long m, n;
        scanf("%lld %lld", &m, &n);
        segmented_sieve(m, n);
        if (i < t - 1) {
            printf("\n"); // Separate outputs for each test case with an empty line
        }
    }

    return 0;
}
