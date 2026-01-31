#include<stdio.h>
#include<math.h>


int max(int a, int b) {

    if (a > b) {
        return a;
    }
    return b;

}

int main() {
    int a,b;
    scanf("%d",&a);

    int count=0;
    int streak=0;
    int m = 0;
    while (a--) {
        scanf("%d",&b);
        if (b>70) {
            count++;
            streak++;
            m = max(m,streak);
        }
        else {
            streak=0;
        }

    }
    printf("%d\n",count);
    printf("%d\n",m);
   
    return 0;
}
