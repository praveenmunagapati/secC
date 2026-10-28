#include <stdio.h>
/*d) A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0
and 1. Subsequent terms are found by adding the preceding two terms in the sequence. Write
a C program to generate the first n terms of the sequence*/
 void facinaccii(int limit) {
     int a = 0;
     int b = 1;
     int sum;
     printf("%d\t",a);
     while (sum<limit) {
         a = b;
         b = sum;
         sum = a+b;
         printf("%d\t",sum);
     }
     return;
 }

int main() {
    setbuf(stdout,0);
    int a = 0;
    int b = 1;
    printf("%d\t",a);
    printf("%d\t",b);
    int sum = a+b;
    printf("%d\t",sum);
    a = b;
    b = sum;
    sum = a+b;
    printf("%d\t",sum);
    a = b;
    b = sum;
    sum = a+b;
    printf("%d\t",sum);
    a = b;
    b = sum;
    sum = a+b;
    printf("%d\t",sum);
    a = b;
    b = sum;
    sum = a+b;
    printf("%d\t",sum);
    a = b;
    b = sum;
    sum = a+b;
    printf("%d\t",sum);
    while (sum<10000) {
        a = b;
        b = sum;
        sum = a+b;
        printf("%d\t",sum);
    }
    printf("\n");
     facinaccii(1000000);


    return 0;
}

