#include<stdio.h>
int main() {
    int class;
    scanf("%d",&class);
    int age;
    scanf("%d",&age);
    int b;
    switch (class) {
        case 1:
            if (age<12) {
               b=300*50/100;
                printf("%d",b);
            }
            else if (age>=60) {
                b=300*33/100;
                printf("%d",b);
            }
            else
                printf("200");
            break;
        case 2:
            printf("1000");
            break;
        default:
            printf("invalid");
    }
    return 0;

}