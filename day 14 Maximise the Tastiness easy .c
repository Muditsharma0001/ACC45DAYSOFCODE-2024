#include <stdio.h>

int main() {
    int T, a, b, c, d;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int max_first = (a > b) ? a : b;
        int max_second = (c > d) ? c : d;

        int max_tastiness = max_first + max_second;

        printf("%d\n", max_tastiness);
    }

    return 0;
}