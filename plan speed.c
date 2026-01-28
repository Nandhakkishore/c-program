
#include <stdio.h>
int main() {
    int plan;
    int speed;
    scanf("%d",&plan);
    switch (plan) {
        case 1:
            speed=40;
            printf("₹%d Mbps",speed);
            break;;
        case 2:
            speed=100;
            printf("₹%d Mbps",speed);
            break;
        case 3:
            speed=300;
            printf("₹%d Mbps",speed);
            break;

    }

    return 0;
}