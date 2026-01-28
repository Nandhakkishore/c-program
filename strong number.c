#include <stdio.h>

int main() {
    int n, sum = 0, digit, fact;

    scanf("%d", &n);

    for (int temp = n; temp > 0; temp /= 10) {
        digit = temp % 10;

        if (digit == 0 || digit == 1)
            fact = 1;
        else if (digit == 2)
            fact = 2;
        else if (digit == 3)
            fact = 6;
        else if (digit == 4)
            fact = 24;
        else if (digit == 5)
            fact = 120;
        else if (digit == 6)
            fact = 720;
        else if (digit == 7)
            fact = 5040;
        else if (digit == 8)
            fact = 40320;
        else
            fact = 362880;   

        sum += fact;
    }

    if (sum == n)
        printf("Yes");
    else
        printf("No");

    return 0;
}

