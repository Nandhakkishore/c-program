#include <stdio.h>

int main() {
    int n = 9;
    int mid = n / 2;
    int left, right;
    for (int i = 0; i < n; i++) {
        if (i <= mid) {
            left = i;
            right = n - i - 1;
        } else {
            left = n - i - 1;
            right = i;
        }

        for (int j = 0; j < n; j++) {
            if (j > left && j < right)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
