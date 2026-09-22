#include <stdio.h>
int isinnumbers(int *pa ,int key) {
    int flag = 0;
    for (int i = 0;i<20;i++) {
        if (key==pa[i]) {
            flag = 1;
            break;
        }
    }
    return  flag;
}
float avg(int array[]) {
    int sum = 0;
    for (int index = 0; index < sizeof(array)/sizeof(array[0]);index++) {
        sum = sum + array[index];
    }
    float avg = (float)sum / (sizeof(array)/sizeof(array[0]));
    array[5] = 894;
    return avg;
}
int main(void) {
    setbuf(stdout, 0);
    // //65 avg students marks
    // int anita = 1;
    // int raju = 4;
    // .
    // .
    // .
    // int lastguy = 5;

    int classcsmc[20] = {1,1,6,2,5,4,5,5,4,1,1,4,4,4,5,4,5,5,5,4};
    printf("%d\n",sizeof(classcsmc));
    classcsmc[6] = 3;
    printf("%d\n",classcsmc[5]);
    printf("%d\n",classcsmc[4]);
    printf("%d\n",classcsmc[9]);
    int var = 0;
    while (var<20) {
        printf("%d\n",classcsmc[var]);
        var = var + 1;
    }
    for (int index = 0; index < sizeof(classcsmc)/sizeof(classcsmc[0]);index++) {
        printf("%d\n",classcsmc[index]);
    }

    printf("%d\n",classcsmc[4]);
    printf("%d\n",classcsmc[-4]);
    printf("%d\n",classcsmc[40]);//uncheck

    printf("%d\n",classcsmc[4]);
    printf("%p\n",&classcsmc[4]);
    printf("%p\n",&classcsmc[5]);
    printf("%p\n",&classcsmc[6]);
    printf("address of array\n");
    for (int index = 0; index < sizeof(classcsmc)/sizeof(classcsmc[0]);index++) {
        printf("%p\n",&classcsmc[index]);
    }
    for (int index = 0; index < sizeof(classcsmc)/sizeof(classcsmc[0]);index++) {
        printf("%d\n",*(&classcsmc[index]));
    }

    int somearray[] = {1,5,7,5};
    for (int index = 0; index < sizeof(somearray)/sizeof(somearray[0]);index++) {
        printf("%d\n",*(&somearray[index]));
    }

     float avgs = avg(classcsmc);
    printf("%f\n",avgs);
    printf("%p\n",classcsmc);
    printf("%p\n",&classcsmc[0]);
    printf("%d\n",classcsmc[4]);
    printf("%d\n",*(classcsmc+4));
    printf("%d\n",*(classcsmc+0));
    int *pa = classcsmc;
    printf("%d\n",*pa);
    printf("%d\n",*(pa+0));
    printf("%d\n",*(pa+2));
    printf("%d\n",*(pa+6));
    printf("%d\n",*(pa+10));
    printf("%d\n",pa[0]);
    printf("%d\n",pa[10]);
    printf("%d\n",pa[14]);
    int numbers[] = {42, 17, 89, 3, 65, 23, 71, 12, 95, 54, 8, 37, 61, 49, 82, 26, 77, 14, 90, 33};
    int key = 23;
    int flag = 0;
    for (int i = 0;i<20;i++) {
        if (key==numbers[i]) {
        flag = 1;
            break;
        }
    }
    if (flag) {
        printf("key found \n");
    }
    else {
        printf("key not found\n ");
    }

    int x = isinnumbers(numbers,key);
    if (x) {
        printf("key found \n");
    }
    else {
        printf("key not found\n ");
    }

    return 0;
}
