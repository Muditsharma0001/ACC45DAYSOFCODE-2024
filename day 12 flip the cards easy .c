#include <stdio.h>

int main() {
    int T, N, X;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &X);

        int min_ops = (X <= N/2) ? X : N-X;

        printf("%d\n", min_ops);
    }

    return 0;
}