#include <stdio.h>

int main() {
        int role, loginTime;

        scanf("%d", &role);
        scanf("%d", &loginTime);

        switch(role) {
                case 1:
                        printf("Full Access");
                        break;
                case 2:
                        if(loginTime >= 9 && loginTime <= 18)
                                printf("Limited Access");
                        else
                                printf("Access Denied");
                        break;
        }

        return 0;
}
