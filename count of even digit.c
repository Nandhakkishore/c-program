#include<stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    for(;n!=0;) {
        int dig=n%10;
        n=n/10;
        if (dig%2==0) {
            count=count+1;
        }}
    printf("%d",count);

return 0;

    }