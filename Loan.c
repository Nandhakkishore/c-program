#include <stdio.h>

int main() {
    int loan, credit;

    scanf("%d", &loan);
    scanf("%d", &credit);

    switch (loan) {
        case 1:
            if (credit >= 700)
                printf("Approved");
            else if (credit >= 650)
                printf("Manual Review");
            else
                printf("Rejected");
            break;

        case 2:
            if (credit >= 700)
                printf("Approved");
            else if (credit >= 650)
                printf("Manual Review");
            else
                printf("Rejected");
            break;
    }

    return 0;
}
