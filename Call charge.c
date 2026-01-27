#include <stdio.h>

int main() {
        int call, minutes, charge = 0;

        scanf("%d", &call);
        scanf("%d", &minutes);

        switch(call) {
                case 1:
                        charge = 1 * minutes;
                        break;
                case 2:
                        charge = 3 * minutes;
                        break;
                case 3:
                        charge = 10 * minutes;
                        break;
        }

        printf("Call Charge ₹%d", charge);
        return 0;
}
