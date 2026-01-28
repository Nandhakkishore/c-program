
#include <stdio.h>
int main() {
    int tickettype;
    scanf("%d",&tickettype);

    switch (tickettype) {
        case 1:
            printf(" Upgrade ₹ 300 ");
            break;;
        case 2:
            printf("Upgrade ₹ 800");
            break;
        case 3:

            printf("Upgrade ₹ 1500");
            break;

    }

    return 0;
}