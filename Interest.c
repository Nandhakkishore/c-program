
#include<stdio.h>
int main() {
    int yr,a;
    scanf("%d",&a);
    scanf("%d",&yr);
    switch (a) {
        case 1:

                printf("4%%");

            break;;
        case 2:
            if (yr<=3) {
                printf("5%%");
            }
             else if (yr<3 ){
                printf("7%%");
            }
            break;
            default:
            printf("Invalid");
    }
    return 0;
}