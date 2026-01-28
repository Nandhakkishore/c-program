#include <stdio.h>

int main() {
    int doctor;
    int fee;

    scanf("%d", &doctor);

    switch (doctor) {
        case 1:
            fee = 500;
            break;
        case 2:
            fee = 1200;
            break;
        default:
            return 0;
    }

    printf("Consultation Fee ₹%d", fee);

    return 0;
}
