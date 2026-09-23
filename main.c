#include <stdio.h>

int main(void) {
    setbuf(stdout, 0);
    //multidimentional array

    int array2d[2][2] = {{3,4},{5,6}};
    printf("%d\n",sizeof(array2d));
    array2d[0][0] = 1;
    array2d[0][1] = 2;
    array2d[1][0] = 3;
    array2d[1][1] = 4;
    printf("array2d matrix \n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t",array2d[i][j]);
        }
        printf("\n");
    }
    int another2d[2][2] = {{4,9},{11,6}};
    printf("another2d matrix \n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t",another2d[i][j]);
        }
        printf("\n");
    }
    int result2d[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result2d[i][j] = array2d[i][j] + another2d[i][j];
        }
    }
    printf("result matrix \n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t",result2d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
