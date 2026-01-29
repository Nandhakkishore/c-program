#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        for (int j=0;j<n-1-i;j++) {
            printf(" ");
        }
        for (int k=0;k<=i;k++) {
            printf("%c",65+k);
        }
        for (int k=i;k>0;k--) {
            printf("%c",65+k-1);
        }
        for (int j=0;j<n-1-i;j++) {
            printf(" ");
        }
        printf("\n");

    }

    return 0;
}