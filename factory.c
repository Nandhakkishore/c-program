#include <stdio.h>

int main() {
    int N;
    int status;
    int currentStreak = 0;
    int maxStreak = 0;
    int i = 0;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &status);

        if (status == 0) {
            currentStreak++;
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
        i++;
    }

    printf("Longest Failure Streak: %d", maxStreak);

    return 0;
}
