#include <stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int balance;
    scanf("%d",&balance);
    int withdrwalamount;
    scanf("%d",withdrwalamount);
    int limit=5000;
    switch (type)
    {
        case 1:
            if(balance>=withdrwalamount){
                printf("trancation success");

            }
            else{
                printf("limit excced");
            }
            break;
        case 2:
            if(withdrwalamount<=limit){
                printf("Transaction Success");
            }
            else{
                printf("Invalid");
            }

            break;
    }

}