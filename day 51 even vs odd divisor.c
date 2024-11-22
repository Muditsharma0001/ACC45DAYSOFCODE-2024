#include <stdio.h>

void count_even_odd_divisors(int N, int* f_N, int* g_N) {
    *f_N = 0; 
    *g_N = 0; 
    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) { 
            if (i % 2 == 0) {
                (*f_N)++; 
            } else {
                (*g_N)++; 
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T); 
    
    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N); 
        
        int f_N, g_N;
        count_even_odd_divisors(N, &f_N, &g_N); 
        if (f_N > g_N) {
            printf("1\n");
        } else if (f_N == g_N) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}