#include <stdio.h>

int main() {
    int a, expr;
    int salary = 0;

    scanf("%d", &a);
    scanf("%d", &expr);

    switch (a) {
        case 1:
            salary = 50000;
            break;

        case 2:
            salary = 35000;
            break;
    }

    if (expr >= 3) {
        salary += expr * 5000;
    }

    printf("Salary  ₹%d", salary);

    return 0;
}
