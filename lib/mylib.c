#include<stdio.h>
unsigned int sids(unsigned int num) {
    unsigned int total = 0;
    while (num!=0) {
        total = total + num%10;
        num = num/10;
    }
    return total;
}
void isprime(int num) {
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
    return;
}