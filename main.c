#include <stdbool.h>
#include <stdio.h>

int main(void) {
    setbuf(stdout,0);
    //if else switch case default break

    int a = 100 ,b = 15;
    int result = a>b;
    if (result) {
        printf("a is big");
    }
    result = b>a;
    if (result) {
        printf("b is big");
    }
    int c = 16;
    if (a>b) {
        if (a>c) {
            printf("a is big");
        }
    }
    if (b>a) {
        if (b>c) {
            printf("c is big");
        }
    }
    if (c>a) {
        if (c>b) {
            printf("c is big");
        }
    }

    return 0;
}
