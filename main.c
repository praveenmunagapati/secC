#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
   // b) Write a program that finds if a given number is a prime number.
    int num = 1;
    if (num<=0) {
        printf("not qualified of prime");
    }else {
        int count = 0;
        for (int i = 1 ; i<=num ; i++) {
            // printf("%d mod %d = %d\n",num,i,num%i);
            if (num%i==0) {
                count++;
            }
        }
        // printf("%d",count);
        if (count<=2) {
            printf("%d is prime",num);
        }else {
            printf("%d is not prime",num);
        }
    }

    return 0;
}
