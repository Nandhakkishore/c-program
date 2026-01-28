
#include <stdio.h>
int main() {
    int violation;
    int fine;
    scanf("%d",&violation);
    switch (violation) {
        case 1:
            fine=1000;
            printf("₹%d",fine);
            break;;
        case 2:
            fine=1500;
            printf("₹%d",fine);
            break;
        case 3:
            fine=2000;
            printf("₹%d",fine);
            break;

    }

    return 0;
}