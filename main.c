#include <stdbool.h>
#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
    //if else switch case default break
    setbuf(stdout,0);
    int i = 10;
    if (i == 1) {
        printf("one");
    } else if (i == 2) {
        printf("two");
    } else if (i == 3) {
        printf("three");
    } else if (i == 4) {
        printf("four");
    } else if (i == 5) {
        printf("five");
    } else {
        printf("no suitable value detected");
    }

    switch (i) {
        case 1: printf("one");
            break;
        case 2: printf("two");
            break;
        case 3: printf("three");
            break;
        case 4: printf("four");
            break;
        case 5: printf("five");
            break;
        default: printf("no suitable value detected");
            break;
    }

    return 0;
}
