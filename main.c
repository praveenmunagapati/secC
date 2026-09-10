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

    return 0;
}
