#include<stdio.h>
int main() {
    int a;
    int sum=0;
    scanf("%d",&a);
    for (int i=1;i<a;i++) {
        if (a%i==0)
        sum=sum+i;
    }
    
if (sum==a) {
    printf("%d",sum);
}
    else {
        printf("%d not perfect",sum);
    }
    return 0;
}