#include <stdio.h>

int main() {
        int vehicleType, hours, rate;

        scanf("%d", &vehicleType);
        scanf("%d", &hours);

        switch(vehicleType) {
                case 1:  
                        rate = 10;
                        break;
                case 2:
                        rate = 20;
                        break;
                default:
                        rate = 20;
        }

        printf("Parking Fee ₹%d", rate * hours);

        return 0;
}
