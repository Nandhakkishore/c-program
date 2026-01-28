
#include <stdio.h>
int main() {
    int duration;
    int fee;
    scanf("%d",&duration);
    switch (duration) {
        case 1:
            fee=1500;
            printf("%d",fee);
            break;;
        case 2:
            fee=4000;
            printf("%d",fee);
            break;
        case 3:
            fee=7000;
            printf("%d",fee);
            break;

    }

    return 0;
}