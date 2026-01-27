#include <stdio.h>

int main() {
    int plan;
    float data;

    scanf("%d", &Type);
    scanf("%f", &data);

    switch (Type) {
        case 1:   
            if (data <= 1.0)
                printf("Normal Speed");
            else
                printf("Speed Reduced");
            break;

        case 2:
            if (data <= 2.0)
                printf("Normal Speed");
            else
                printf("Extra Charges Applied");
            break;

        default:
            printf("Extra Charges Applied");
    }

    return 0;
}
