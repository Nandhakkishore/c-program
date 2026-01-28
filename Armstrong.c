#include <stdio.h>

int main() {
    int n, or, res = 0;
    scanf("%d", &n);

    or= n;

    for (int i = n; i> 0; i /= 10) {
        int dig = i % 10;
        res += dig * dig * dig;
    }

    if (res == or)
        printf("%d is an Armstrong number", or);
    else
        printf("Not  armstrong number");

    return 0;
}
