#include <stdio.h>

int calculate_notebooks(int n) {

    return n * 10;
}

int main() {
    int t;  
    scanf("%d", &t);

    while (t--) {
        int n;  
        scanf("%d", &n);

        printf("%d\n", calculate_notebooks(n));
    }

    return 0;
}