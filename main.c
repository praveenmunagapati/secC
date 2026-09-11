#include <stdbool.h>
#include <stdio.h>

int main(void) {
    setbuf(stdout,0);
    //if else switch case default break
    int a = 100 ,b = 15,c = 16;
    if ((a>b)&&(a>c) ){
        printf("a is big");
    }
    if ((b>a)&&(b>c)) {
        printf("c is big");
    }
    if (c>a&&c>b) {
        printf("c is big");
    }

    return 0;
}
