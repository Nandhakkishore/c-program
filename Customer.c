#include <stdio.h>

int main() {
        int customer, billAmount;
        int payAmount = 0;

        scanf("%d", &customer);
        scanf("%d", &billAmount);

        switch(customer) {
                case 1: 
                        payAmount = billAmount - (billAmount * 5 / 100);
                        break;
                case 2: 
                        payAmount = billAmount - (billAmount * 15 / 100);
                        break;
        }

        printf("Pay ₹%d", payAmount);

        return 0;
}
