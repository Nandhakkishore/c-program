#include <stdio.h>

int main() {
    int distance;
    int fee;

    scanf("%d", &distance);

    switch (distance) {
        case 1:
            fee = 800;
            printf("Transport Fee ₹%d", fee);
            break;
        case 2:
            fee = 1200;
            printf("Transport Fee ₹%d", fee);
            break;
        case 3:
            fee = 1800;
            printf("Transport Fee ₹%d", fee);
            break;
        default:
            printf("Invalid");
            return 0;
    }



    return 0;
}
