#include <stdbool.h>
#include <stdio.h>

int main(void) {
    setbuf(stdout,0);
    //logical
    // && || !
    // logical and
    /*      a   b   &&   ||
     *       0   0   0    0
     *       0   1   0    1
     *       1   0   0    1
     *       1   1   1    1
     */
    int num1 = 15;
    int num2 = 14;
    printf("%d\n",!(num1>num2));

    int num3 = 5;
    printf("%d\n",(num1 > num2)&&(num1 > num3));

    int num4 = 7;
    printf("%d\n",(num1 > num2)&&(num1 > num3)&&(num1 >num4));

    printf("%d\n",(0||1));
    printf("%d\n",!((num1 > num2)||(num1 > num3)&&(num1 >num4)));


    return 0;
}
