#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
    // signed
    signed int a = -2147483647;
    unsigned int b = 4294967295;
    a = 156;
    a = -156;
    
    return 0;
}
