#include <stdbool.h>
#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
    //if else switch case default break
    int i = 2;
    switch (i) {
        case 1: printf("one\n");break;
        case 2: printf("two\n");break;
        case 3: printf("three\n");break;
        case 4: printf("four\n");break;
        case 5: printf("five\n");break;
        default: printf("no suitable value detected\n");
            break;
    }

    return 0;
}
