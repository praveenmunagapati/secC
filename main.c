#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
    /*
    c) Write a program that prints a multiplication table for a given number and the number of rows in
        the table. For example, for a number 5 and rows = 3, the output should be:
        5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
*/
    int tableno ,rows;
    tableno = 5;
    rows = 3;
    for (int i = 1; i <= rows; ++i) {
        printf("%d x %d = %d\n",tableno,i,tableno*i);
    }

    return 0;
}
