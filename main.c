#include <stdio.h>
int main() {
    setbuf(stdout,0);
    // 2. Medium
    // Write a C program to find the second-largest element in an array
    // without sorting the array.
    // use cases
    // 2
    // 10 20 30 40 50
    // 40
    // 1
    // 12 5 8 25 15 20
    // 20

    int array[5] = {12 ,5, 8, 25, 15};
    for (int i = 0; i < 5; ++i) {
        printf("%d\t",array[i]);
    }
int carray[sizeof(array)/sizeof(array[0])];

    for (int i = 0; i < 5; ++i) {
        carray[sizeof(array)/sizeof(array[0])-i-1] = array[i];
    }
    printf("\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\t",carray[i]);
    }
    printf("\n");
    //
    // int *high;
    // int *low;
    //
    // high = &array[4];
    // low = &array[0];
    // printf("%p\n",high);
    // printf("%p\n",low);
    // while (low<high) {
    //     *high = (*low  *  *high)/ (*low = *high);
    //     low++;
    //     high--;
    // }
    // for (int i = 0; i < 5; ++i) {
    //     printf("%d\t",array[i]);
    // }
    char name[6] = {'h' ,'e', 'l', 'l', 'o','\0'};
    printf("%s\n",name);
    char *high;
    char *low;

    high = &name[4];
    low = &name[0];
    printf("%p\n",high);
    printf("%p\n",low);
    while (low<high) {
        *high = (*low  *  *high)/ (*low = *high);
        low++;
        high--;
    }
    printf("%s\n",name);

    return 0;
}

