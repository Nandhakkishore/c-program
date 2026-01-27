#include <stdio.h>

int main() {
    int vehicle, trips;
    int amount = 0;

    scanf("%d", &vehicle);
    scanf("%d", &trips);

    switch (vehicle) {
        case 1:   
            if (trips == 1)
                amount = 100;
            else if (trips >= 2)
                amount = 800;   
            break;

        case 2:   
            amount = trips * 240;
            break;
    }

    printf("₹%d", amount);

    return 0;
}
