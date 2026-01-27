#include <stdio.h>

int main() {
        int category, fee = 0;

        scanf("%d", &category);

        switch(category) {
                case 1: 
                        fee = 1200; 
                        break; 
                case 2: 
                        fee = 800; 
                        break;  
                case 3: 
                        fee = 500; 
                        break;  
        }

        printf("Exam Fee ₹%d", fee);
        return 0;
}
