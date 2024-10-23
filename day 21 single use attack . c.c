#include <stdio.h>

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        int h, x, y; 
        scanf("%d %d %d", &h, &x, &y);

        int min_attacks = (h + x - 1) / x; 
        int special_attacks = (h - y + x - 1) / x + 1; 

        printf("%d\n", (min_attacks < special_attacks) ? min_attacks : special_attacks);
    }

    return 0;
}