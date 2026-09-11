#include <stdbool.h>
#include <stdio.h>

int main(void) {
    setbuf(stdout,0);
    //if else switch case default break
    int a = 100 ,b = 150,c = 160;


    if ((a>b)&&(a>c) ){
        printf("a is big");
    } else if ((b>a)&&(b>c)) {
        printf("c is big");
    }else if (c>a&&c>b) {
        printf("c is big");
    }

    return 0;
}
