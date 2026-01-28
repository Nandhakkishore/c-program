#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
  int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++) {
        if (i%a==0)
            sum=sum+i;


    }
    printf("%d",sum);
    return 0;
}