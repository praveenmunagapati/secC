#include <stdio.h>
void linearsearch(int *parray,int key) {
    for (int i = 0; i < 5; ++i) {
        if (key==parray[i]) {
            printf("key found at index %d\n",i);
            break;
        }
    }
    return;
}
void linearsearchr(int *parray,int key) {
    // for (int i = 0; i < 5; ++i) {
    //     if (key==parray[i]) {
    //         printf("keyfound at index %d\n",i);
    //         break;
    //     }
    // }
    if (key==*parray) {
        printf("key found at address %p\n",parray);
        return;
    }
    linearsearchr(parray+1,key);
    return;
}

int linearsearchrr(int *parray,int key) {
    if (key==*parray) {
        printf("key found at address %p\n",parray);
        return 1;
    }

    return linearsearchrr(parray+1,key);
}
int main() {
    setbuf(stdout,0);
    int array[5] = { 5,6,8,7,9};
    int key = 7;
    for (int i = 0; i < 5; ++i) {
        if (key==array[i]) {
            printf("key found at index %d\n",i);
            break;
        }
    }

    linearsearch(array,key);
    linearsearchr(array,key);
    if (linearsearchrr(array,key)) {
        printf("key found \n");
    }else {
        printf("key not found \n");

    }
    return 0;
}

