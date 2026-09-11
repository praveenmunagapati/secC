#include <stdbool.h>
#include <stdio.h>

int main(void) {
    setbuf(stdout,0);
    //if else switch case default break
    int a = 1000 ,b = 150,c = 160;

    if (a>b) {
        printf("a is big");
    }
    if (b>a) {
        printf("b is big");
    }
    // ?:
    // condtion ? true : false
    printf(a>b?"a is big":"b is big");
    return 0;
}
