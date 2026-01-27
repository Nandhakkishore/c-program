#include <stdio.h>

int main() {
        int seatType, showTime;
        int price = 0;

        scanf("%d", &seatType);
        scanf("%d", &showTime);

        switch(seatType) {
                case 1: 
                        price = 150;
                        break;
                case 2: 
                        price = 250;
                        break;
        }

        if(showTime >= 18)
                price += 50;

        printf("Ticket Price ₹%d", price);

        return 0;
}
