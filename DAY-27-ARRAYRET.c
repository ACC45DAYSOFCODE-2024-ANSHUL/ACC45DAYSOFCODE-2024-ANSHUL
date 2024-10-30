#include <stdio.h>

void recover_array(int T) {
    while (T--) {
        int N;
        scanf("%d", &N);
        
        long long B[N];
        long long total_B = 0;

        // Read array B and calculate its sum
        for (int i = 0; i < N; i++) {
            scanf("%lld", &B[i]);
            total_B += B[i];
        }

        // Calculate the total sum S
        long long S = total_B / (N + 1);

        // Recover array A
        long long A[N];
        for (int i = 0; i < N; i++) {
            A[i] = B[i] - S;
        }

        // Print the recovered array A
        for (int i = 0; i < N; i++) {
            printf("%lld ", A[i]);
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    recover_array(T);
    return 0;
}
