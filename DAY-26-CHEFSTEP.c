#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int N, K; 
        scanf("%d %d", &N, &K);
        
        int distances[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &distances[i]);
        }
        
        
        char result[N + 1]; 
        
        for (int i = 0; i < N; i++) {
            if (distances[i] % K == 0) {
                result[i] = '1'; 
            } else {
                result[i] = '0'; 
            }
        }
        
        result[N] = '\0'; 
        printf("%s\n", result); 
    }
    
    return 0;
}
