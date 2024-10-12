#include <stdio.h>
#include <math.h>

int main() {
    int t, n, k, m;

    scanf("%d", &t);

    while (t--) {
        
        scanf("%d %d %d", &n, &k, &m);

        int bags_needed = (int) ceil((double) n / (k * m));

        printf("%d\n", bags_needed);
    }

    return 0;
}