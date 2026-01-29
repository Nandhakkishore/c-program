#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            int s=j%2;
            printf("%d ",s);
        }
        printf("\n");
    }
    return 0;
}


1
21
321
