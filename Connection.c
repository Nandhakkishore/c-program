#include <stdio.h>

int main() {
        int connection, units;
        int bill = 0;

        scanf("%d", &connection);
        scanf("%d", &units);

        switch(connection) {
                case 1: 
                        if(units <= 30)
                                bill = units * 5;
                        else
                                bill = 30 * 5 + (units - 30) * 8;
                        break;
                case 2: 
                        bill = units * 10;
                        break;
        }

        printf("Bill ₹%d", bill);

        return 0;
}
