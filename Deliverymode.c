#include <stdio.h>

int main() {
        int delivery, charge = 0;

        scanf("%d", &delivery);

        switch(delivery) {
                case 1:
                        charge = 40;
                        break;
                case 2:
                        charge = 120;
                        break;
                case 3:
                        charge = 0;
                        break;
        }

        printf("Delivery Charge ₹%d", charge);
        return 0;
}
