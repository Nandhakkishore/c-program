#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("1.Domestic\n");
    printf("2.Commercial\n");
    float c;
    int b;
    scanf("%d",&b);
    switch (b) {
        case 1:
            if (a<=100) {
                c=a*3;
                printf("%d > Bill %.0f",a,c);
            }
            else if (a>100) {
                c=a*5.12;
                printf("%d > Bill %.0f",a,c);
            }
            break;
        case 2:
            c=a*7.5;
            printf("%d > Bill %.0f",a,c);
            break;
        default:
            printf("invalid");


    }
    return 0;
}

