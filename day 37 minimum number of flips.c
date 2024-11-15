#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    while (T--) {
        int N; 
        scanf("%d", &N); 
        
        int A[N]; 
        int sum = 0; 

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            sum += A[i];
        }

        if (sum == 0) {
            printf("0\n");
            continue;
        }

        int flips_needed = (sum > 0) ? (sum / 2) : (-sum / 2);
        if (flips_needed > N / 2) {
            printf("-1\n"); 
        } else {
            printf("%d\n", flips_needed); \
        }
    }

    return 0;
}