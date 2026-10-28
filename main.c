#include <stdio.h>
//matrix multiplication
int main(void) {
    setbuf(stdout, 0);
    //multidimentional array
    int array2d[2][2] = {{3,4},{5,6}};
    int another2d[2][2] = {{4,9},{11,6}};
    int result2d[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result2d[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                result2d[i][j] += array2d[i][k] + another2d[k][j];
            }
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
