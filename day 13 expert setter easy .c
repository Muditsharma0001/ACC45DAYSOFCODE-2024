#include <stdio.h>

int main() {
    int T, X, Y;

    scanf("%d", &T);

    while (T--) {
        
        scanf("%d %d", &X, &Y);

        double percentage = (double)Y / X * 100;

        if (percentage >= 50) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
