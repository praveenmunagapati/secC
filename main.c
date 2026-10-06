#include <stdint.h>
#include <stdio.h>
static int i = 55;//global variable
int foo() {
    ++i;
    return i;
}
int main(void) {
    setbuf(stdout, 0);
    //scope and lifetime
    //storage classes
    {
        auto signed int i = 10;
        printf("%d\n",i);
        {
            auto signed int i = 5;
            printf("%d\n",i);
        }
        printf("%d\n",i);
    }
    printf("%d\n",i);

    return 0;
}
