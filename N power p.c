#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
  int a;
    scanf("%d",&a);
    int pow=1;
    for (int i=1;i<=n;i++) {
        pow=pow*a;

    }
    printf("%d",pow);
    return 0;
}