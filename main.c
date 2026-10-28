#include <stdio.h>
int arraysum(int *parray) {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum+=parray[i];
    }
    return sum;
}
//not flexble
int arraysumr(int *parray) {
    if (*parray == 9) {
        return 9;
    }
    return *parray + arraysumr(parray+1);
}
//flexible works with any array
int arraysumrf(int *parray,int lenght) {
    if (lenght == 1) {
        return *parray;
    }
    return *parray + arraysumrf(parray+1,lenght - 1);
}

int main() {
    setbuf(stdout,0);
    int array[5] = { 5,6,8,7,9};
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum+=array[i];
    }
    printf("%d\n",sum);
    printf("%p\n",array);
    printf("%p\n",array+1);
    printf("%p\n",array+2);
    printf("%p\n",array+3);
    printf("%p\n",array+4);
    printf("%d\n",*array);
    printf("%d\n",*(array+1));
    printf("%d\n",*(array+2));
    printf("%d\n",*(array+3));
    printf("%d\n",*(array+4));
    printf("%d\n",arraysum(array));
    printf("%d\n",arraysumr(array));
    printf("%d\n",arraysumrf(array,sizeof(array)/sizeof(int)));


    return 0;
}

