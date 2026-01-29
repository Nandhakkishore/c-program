
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int size = 2 * n - 1; 

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int a = top;
            if (left < a)
                a = left;
            if (bottom <a)
                a = bottom;
            if (right < a)
                a = right;

            int val = n - a; 
            printf("%d", val);

            if (j != size - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
