#include <stdio.h>

int main() {
    int totalData;
    int N;
    int usage;
    int daysUsed = 0;
    int i = 0;

    scanf("%d", &totalData);
    scanf("%d", &N);

    while (i < N && totalData > 0) {
        scanf("%d", &usage);
        totalData -= usage;

        if (totalData >= 0) {
            daysUsed++;
        } else {
            totalData = 0;
            daysUsed++;
            break;
        }
        i++;
    }
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB", totalData);

    return 0;
}
