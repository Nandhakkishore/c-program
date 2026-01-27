#include <stdio.h>

int main() {
        int flightClass, extra;
        int charge;

        scanf("%d", &flightClass);
        scanf("%d", &extra);

        switch(flightClass) {
                case 1:  
                        charge = extra * 300;
                        printf("Extra Baggage Charge ₹%d", charge);
                        break;

                case 2:
                        if(extra <= 3)
                                printf("Free");
                        else {
                                charge = (extra - 3) * 300;
                                printf("Extra Baggage Charge ₹%d", charge);
                        }
                        break;
        }

        return 0;
}
