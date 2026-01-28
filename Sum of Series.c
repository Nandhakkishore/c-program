#include<stdio.h>
int main() {
   int n;
    scanf("%d",&n);
    int a=0;
    for (int i=1;i<=n;i++) {
       a=a+(i*i);

    }
    printf("%d",a);
    return 0;
}