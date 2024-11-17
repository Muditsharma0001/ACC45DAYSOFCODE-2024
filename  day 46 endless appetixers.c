#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R); 
        int extra_sticks = R / 30;

        int total_sticks = X + extra_sticks;

        int plates = total_sticks / Y;

        printf("%d\n", plates);
    }

    return 0;
}