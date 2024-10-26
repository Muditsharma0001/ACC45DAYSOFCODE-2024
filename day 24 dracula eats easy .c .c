#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N); 
        
        int count = 0;
        if (N >= 2) {
            count = (N - 2) / 7 + 1; 
        }
        
        printf("%d\n", count); 
    }
    
    return 0;
}