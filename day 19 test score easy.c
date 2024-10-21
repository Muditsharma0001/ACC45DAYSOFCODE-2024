#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    while (T--) {
        int N, X, Y; 
        scanf("%d %d %d", &N, &X, &Y); 

        int max_score = N * X;

        if (Y <= max_score && Y % X == 0) {
            printf("YES\n"); 
        } else {
            printf("NO\n");
        }
    }

    return 0; 
}