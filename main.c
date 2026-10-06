#include <stdint.h>
#include <stdio.h>
#include "lib/mylib.h"
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
    //teststatic();//cant access  i
    testexterne();
    return 0;
}
