#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int N, K; 
        scanf("%d %d", &N, &K);
        
        int count = 0; 
        for (int i = 0; i < N; i++) {
            int characteristic_value;
            scanf("%d", &characteristic_value);
            
            int new_value = characteristic_value + K;
            
            if (new_value % 7 == 0) {
                count++;
            }
        }

        printf("%d\n", count);
    }
    
    return 0;
}