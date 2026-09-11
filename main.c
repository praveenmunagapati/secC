#include <stdbool.h>
#include <stdio.h>

int main(void) {
    setbuf(stdout,0);
    //bitwise
    // & | ^ ~ << >>

    printf("%d\n",17&5);
    // 7   111
    //      &
    // 5   101
    //     101 -> 5
    // 17   1010 + 111
    //   17    10001
    //    5    00101
    //         00001
    printf("%d\n",17|5);
    //   17    10001
    //    5    00101
    //          10101
    printf("%d\n",17^5);
    //   17    10001
    //    5    00101
    //         10100
    printf("%d\n",~500000);
    /*
     *    1 byte integer type
     *    2p8 256 values
     *    non negetive 0 255
     *    both p n -128 to -1 and 0 127
     *    -1 0
     *     -2 1
           -3 2
*/
    printf("%d\n",10*2);
    printf("%d\n",10<<5);
    // 10 -> 1010
    // 1<- 10100 -> 20
    // 20 -> 10100
    //10 -> 101000000
    //mul 2pn n p lshift 10 * 2p5 -> 10 * 32 = 320
    printf("%d\n",10/2);
    printf("%d\n",10>>1);
    //div 2pn n p lshift 10 / 2p1 -> 10 * 2 = 5
    // 10 -> 1010 -> 101 -> 5
    printf("%f\n",(float)10/4);
    printf("%d\n",10>>2);
    // 10 / 2p2 10 / 4 => 2
    //10 -> 1010 -> 10 -> 2

    // 8 -> 1000
    // 1  = 8 & 1
    // 1000
    // 0001
    //0000
    // 1<<1
    // 1 * 2 = 2 10
    // 1000
    // 0010
    //0000
    //1000
    //1000
    //1000
    printf("%d\n",8==7);
    printf("%d\n",8==8);
    printf("%d\n",8&8);

    return 0;
}
