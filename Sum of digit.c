#include<stdio.h>
int main() {
    int n;
    int res=0;
    scanf("%d",&n);
    for(;n!=0;) {
        int dig=n%10;
        res=res+dig;
        n=n/10;


    }
    printf("%d ",res);
    return 0;
}