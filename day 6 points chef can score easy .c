#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        int points_a = 500 - 2 * x;
        int points_b = 1000 - 4 * y;
        
        int points_ab = points_a + 1000 - 4 * (x + y);
        int points_ba = points_b + 500 - 2 * (x + y);
        
        printf("%d\n", points_ab > points_ba ? points_ab : points_ba);
    }
    return 0;
}