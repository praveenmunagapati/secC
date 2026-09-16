#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
   // d) Write a program
   // that shows the binary equivalent of a given
   // positive number between 0 to 255.
    unsigned int num;
    num = 2;
    for (unsigned int i = 128;i>0;i >>= 1) {
        printf("%u",(num&i)>=1?1:0);
    }
    return 0;
}
