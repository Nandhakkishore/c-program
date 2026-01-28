
#include <stdio.h>
int main() {
    int booktype;
    int fine;
    int days;
    scanf("%d",&booktype);
    scanf("%d",&days);
    switch (booktype) {
        case 1:
            fine=days*2;;
            printf("₹%d",fine);
            break;;
        case 2:
            fine=days*5;
            printf("₹%d",fine);
            break;

    }

    return 0;
}