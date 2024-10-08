#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read number of test cases
    
    for (int i = 0; i < T; i++) {
        int X, Y; // Positions of the policeman and thief
        scanf("%d %d", &X, &Y); // Read positions
        
        // Calculate the minimum time to catch the thief
        int time_to_catch = abs(Y - X);
        
        // Print the result
        printf("%d\n", time_to_catch);
    }
    
    return 0;
}
