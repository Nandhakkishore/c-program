
#include <stdio.h>
int main() {
    int fuel;
    int litre;
    int cost;
    scanf("%d",&fuel);
    scanf("%d",&litre);

    switch (fuel) {
        case 1:
            cost=litre*105;;
            printf("₹%d ",cost);
            break;;
        case 2:
            cost=litre*92;
            printf("₹%d ",cost);
            break;
        case 3:
            cost=litre*85;
            printf("₹%d ",cost);
            break;

    }

    return 0;
}