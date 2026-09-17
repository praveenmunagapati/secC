#include <stdio.h>
unsigned int sids(unsigned int num) {
    unsigned int total = 0;
    while (num!=0) {
        num = num/10;
        total = total + num%10;
    }
    return total;
}
int main(void) {
    setbuf(stdout, 0);
    // c) Write a C program to find the sum of individual digits of a positive integer and
    // test given number is palindrome
    //123 = 6
    //784 = 19
    unsigned int num = 1234564;
    unsigned int total = 0;
    // printf("%d\n",num%10);
    // num = num/10;
    // printf("%d\n",num%10);
    // num = num/10;
    // printf("%d\n",num%10);
    // total = num%10;
    // num = num/10;
    // total = total + num%10;
    // num = num/10;
    // total = total + num%10;
    // num = num/10;
    // total = total + num%10;
    // printf("%d\n",total);

    // while (num!=0) {
    //     num = num/10;
    //     total = total + num%10;
    // }
    total = sids(646846460);
    printf("%u\n",total);
    total = sids(42424);
    printf("%u\n",total);
    total = sids(7878);
    printf("%u\n",total);
    total = sids(1454);
    printf("%u\n",total);
    total = sids(2121);
    printf("%u\n",total);
    total = sids(4545);
    printf("%u\n",total);
    total = sids(7878);
    printf("%u\n",total);
}