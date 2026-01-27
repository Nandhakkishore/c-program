
#include<stdio.h>
int main() {
    int a,b;
    scanf("%d",&b);
    scanf("%d",&a);
    switch (b) {
        case 1:
            if (a>=0) {
                printf("50");
            }
            break;;
        case 2:
            if (a>=1000) {
                printf("Free");
            }
            else {
                printf("Delivery 100");
            }
            break;
    }
}