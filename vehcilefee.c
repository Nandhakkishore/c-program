#include <stdio.h>

int main() {
        int vehicle, distance, fare = 0;

        scanf("%d", &vehicle);
        scanf("%d", &distance);

        switch(vehicle) {
                case 1:
                        fare = 10 * distance;
                        break;
                case 2:
                        fare = 15 * distance;
                        break;
                case 3:
                        fare = 20 * distance;
                        break;
        }

        printf("Fare ₹%d", fare);
        return 0;
}
