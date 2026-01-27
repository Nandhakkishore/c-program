#include<stdio.h>
int main() {
    int type;
    scanf("%d",&type);
    int a;
    scanf("%d",&a);
    switch (type) {
        case 1:
            if (a==11)
            printf("%d",199-20);

            if (a==12)
            printf("%d",199-20);
            if (a==13)
            printf("No cashback");
            break;

        case 2:
            if (a==11)
                printf("%d",399-20);

            if (a==12)
                printf("%d",399-20);
            if (a==13)
                printf("No cashback");
            break;
    }
}