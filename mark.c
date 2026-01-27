#include<stdio.h>
int main() {
    int a,b,atte;
    scanf("%d",&a);
    scanf("%d",&atte);


            if (atte>75) {
                if (a>=75) {
                    printf("Distinction");

                }
                else if (a>50 && a<75) {
                    printf("Pass");
                }
                else if (a<50) {
                    printf("Fail");
                }
            }
    else {
        printf("Fail");
    }
    return 0;
}