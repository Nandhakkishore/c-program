#include <stdio.h>

int main() {
    int n, i, num = 2, div = 0, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; num <= n; i++) {

        if(num % i == 0)
            div++;

        if(i == num) {
            if(div == 2)
                count++;

            num++;  
            i = 0;   
            div = 0; 
        }
    }

    printf("Prime count = %d\n", count);

    return 0;
}