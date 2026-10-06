#include <stdint.h>
#include <stdio.h>
int i = 55;//global variable
int foo() {
    ++i;
    return i;
}
int main(void) {
    setbuf(stdout, 0);
    //scope and lifetime
    //storage classes
    printf("%d\n",foo());
    printf("%d\n",foo());
    printf("%d\n",foo());
    printf("%d\n",i);

    return 0;
}
