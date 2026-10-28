#include <stdio.h>
/* a) Write a C program to find the minimum, maximum and average in an array of integers.   */
int main() {
    setbuf(stdout,0);
    int array[10] = {7,5,9,12,47,5,11,20,44,32};
    int minimum = array[0];
    for (int i = 0; i < 10; ++i) {
        if (minimum>array[i]) {
            minimum = array[i];
        }
    }
    int maximum = array[0];
    for (int i = 0; i < 10; ++i) {
        if (maximum<array[i]) {
            maximum = array[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < 10; ++i) {
            sum+= array[i];
    }
    float avg = (float)sum/10;//no of elements in array
    printf("%d\n",minimum);
    printf("%d\n",maximum);
    printf("%f\n",avg);

    return 0;
}

