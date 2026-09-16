#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
   // b) Write a program that finds if a given number is a prime number.
    for (int j = 1;j<=1000;j++) {
        int num = j;
        if (num<=0) {
            printf("not qualified of prime\n");
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
                printf("%d is prime\n",num);
            }else {
                printf("%d is not prime\n",num);
            }
        }
    }
    return 0;
}
