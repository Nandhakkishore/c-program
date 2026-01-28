#include<stdio.h>
int main() {
    int n;
    int res=0;
    scanf("%d",&n);
    int og=n;
    for(;n!=0;) {
        int dig=n%10;
        res=res*10+dig;
        n=n/10;


    }
    if (res==og) {
        printf("%d is palindrome ",res);
    }
    else {
        printf("not palindrom");
    }

    return 0;
}