#include <stdio.h>

int main() {
    int N, i;
    int p1Score, p2Score, lead, maxLead, winner;

    scanf("%d", &N);  // Read the number of rounds

    p1Score = 0;
    p2Score = 0;
    maxLead = 0;
    winner = 1;  

    for (i = 1; i <= N; i++) {
        int s, t;
        scanf("%d %d", &s, &t); 

        p1Score += s;
        p2Score += t;

        lead = p1Score - p2Score;

        if (lead > maxLead) {
            maxLead = lead;
            winner = 1;
        } else if (-lead > maxLead) {
            maxLead = -lead;
            winner = 2;
        }
    }

    printf("%d %d\n", winner, maxLead); 

    return 0;
}