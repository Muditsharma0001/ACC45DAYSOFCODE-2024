#include <stdio.h>

int main() {
    int X, Y;
    
    scanf("%d %d", &X, &Y);
    
    int time_for_first_part = Y / 2;

    int time_for_second_part = X - Y;

    int total_time = time_for_first_part + time_for_second_part;
    
    printf("%d\n", total_time);
    
    return 0;
}