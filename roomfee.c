#include <stdio.h>

int main() {
        int room, fee = 0;

        scanf("%d", &room);

        switch(room) {
                case 1:
                        fee = 80000; 
                        break; 
                case 2: 
                        fee = 60000; 
                        break; 
                case 3: 
                        fee = 45000; 
                        break; 
        }

        printf("Hostel Fee ₹%d", fee);
        return 0;
}
