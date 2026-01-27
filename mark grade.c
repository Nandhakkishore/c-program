#include<stdio.h>
int main() {
    int class;
    int mark;
    scanf("%d",&mark);
    switch (mark/10) {
        case 9: case 10:
            if (mark>=91 && mark<=100)
            printf("A");
            break;
        case 8:
            if (mark>=81 && mark<=90)
            printf("B");
            break;
        case 7:
            if (mark>=71 && mark<=80)
            printf("C");
            break;
        case 6:
            if (mark>=61 && mark<=70)
            printf("D");
            break;
        case 5:
            if (mark>=51 && mark<=60)
            printf("E");
            break;
        case 4:
            if (mark>=41 && mark<=50)
            printf("F");
            break;
        case 3:
            if (mark>=31 && mark<=39)
            printf("Sumplementry");
            break;
        case 2:
            printf("Fail");
            break;

    }
    return 0;

}